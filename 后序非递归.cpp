#include<stdio.h>
#include<stdlib.h>
#define Max 1000

typedef struct node{
	char data;
	struct node *lchild, *rchild;
}*BinTree,BT;

typedef struct Seq{
	BinTree dat[Max];
	int tag;
	int top;	
}*SeqStack;

SeqStack InitStack()
{
	SeqStack s;
	s = (SeqStack)malloc(sizeof(struct Seq)*Max);
	s->top = -1;
	return s;
}
int sum;
int IsEmpty(SeqStack s)
{
	if (s->top==-1) return 1;
	else return 0;
}

int Push(SeqStack s,BinTree r)
{
	if(s->top==Max) return 0;
	else{
		s->top++;
		s->dat[s->top] = r;
		return 1;
	}
}

BinTree Top(SeqStack s)
{
	if (IsEmpty(s))  return 0;
	else return(s->dat[s->top]);
}

int Pop(SeqStack s,BinTree r)
{
	if(IsEmpty(s)) return 0;
	else{
		r = s->dat[s->top];
		printf("%c",r->data);
		s->top--;
		return 1;}
}

BinTree Creat(){
	BinTree bt = NULL;
	char s;
	scanf("%c",&s);
	if(s=='#'){
		bt = NULL;
	}
	else{
		bt = (BinTree)malloc(sizeof(struct node));
		bt->data = s;
		bt->lchild = Creat();
		bt->rchild = Creat();
	}
	return bt;
}
void PreOrder(BinTree bt)
{
    if(bt!=NULL)
    {
    	if(bt->lchild!=NULL||bt->rchild!=NULL)
		{
			sum++;
		 } 
        printf("%c",bt->data); 
        PreOrder(bt->lchild);
        PreOrder(bt->rchild);
    }
}
void InOrder(BinTree bt)
{
    if(bt!=NULL)
    {
        InOrder(bt->lchild);
        printf("%c",bt->data);
        InOrder(bt->rchild);
    }
}
void Post(BinTree root)
{
	SeqStack s;
	BinTree p;
	BinTree q;
	s = InitStack();
	p = root;
	q = NULL;
	while(p!=NULL||!IsEmpty(s))
	{
		//ABC##DE#G##F###
		while(p!=NULL)
		{
			Push(s,p);
			p = p->lchild;
		}
		if(!IsEmpty(s))
		{
			p = Top(s);
			if((p->rchild==NULL)||(p->rchild==q))
			{
				Pop(s,p);
				q = p;
				p = NULL;
			}
			else p = p->rchild;
		}
	}
}
main()
{
	BinTree p = NULL;
	p = Creat();
	printf("前序遍历:"); 
	PreOrder(p);
 	printf("\n");
 	printf("中序遍历:"); 
 	InOrder(p);
 	printf("\n");
 	printf("后序遍历:"); 
	Post(p);
	printf("\n非叶子结点数:"); 
	printf("\n%d",sum);
}
//void Post(BinTree root)
//{
//	SeqStack s;
//	BinTree p;
//	BinTree q;
//	s = InitStack();
//	p = root;
//	q = NULL;
//	while(p!=NULL||!IsEmpty(s))
//	{
//		//ABC##DE#G##F###
//		while(p!=NULL)
//		{
//			Push(s,p);
//			p = p->lchild;
//		}
//		if(!IsEmpty(s))
//		{
//			p = Top(s);
//			if((p->rchild==NULL)||(p->rchild==q))
//			{
//				Pop(s,p);
//				q = p;
//				p = NULL;
//			}
//			else p = p->rchild;
//		}
//	}
//}

