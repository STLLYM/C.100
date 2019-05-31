#include<stdio.h>
#include<stdlib.h>

typedef struct stu* List;
struct stu 
{
	int num;
	struct stu *next;
};
List find(List p)
{
	int numb;
	printf("\n输入要查找的数字：\n");
	scanf("%d",&numb);
	while(p->next!=NULL)
	{
		p=p->next;
		if (p->num==numb)
		{
			return p; 
		}
	}
	return NULL;
}
void insert1(List p0)//头插
{
	int x;
	List m;
	m =	(List)malloc(sizeof(struct stu));
	scanf("%d",&x);
	m->num = x;
	if(p0->next==NULL)
	{
		free(m);
	}
	m->next = p0->next;
	p0->next = m;
} 
void insert2(List p0)//尾插 
{
	int x;
	List m,p;
	m = (List)malloc(sizeof(struct stu));
	m->next = NULL;
	scanf("%d",&x);
	m->num = x;
	p=p0;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=m;
}
void insert3(List p0)//中间插(限于已排好顺序)
{
	int x;
	List m,p;
	m = (List)malloc(sizeof(struct stu));
	scanf("%d",&x);
	m->num = x;
	p=p0;
	while(p->next!=NULL && p->next->num<m->num)
	{
		p=p->next;
	}	
	m->next = p->next;
	p->next = m;
} 
int delate(List p0)                        //删除但是只删除第一个检索元素 
{
	int x,y;
	List p;
	p=p0->next;
	if (p==NULL) return 0;
	printf("输入删除的数字：");
	scanf("%d",&x);
	while (p!=NULL)
	{
		if(p->num==x)
		{
			p0->next=p->next;
			free(p);
			return 1;
		}
		p0 = p;
		p=p->next;
	 } 
	 return 0;
	
 } 
main ()
{
	int x;
	List head,p,q,r;
	head = q = (List)malloc(sizeof(struct stu));
	scanf("%d",&x);
	while(x!=-1)//以-1为标志判断结束
	{
		p = (List)malloc(sizeof(struct stu));
		p -> num = x;
		q -> next = p;
		q = p;
		scanf ("%d",&x);
	} 
	q->next=NULL;
	p=head->next;
	while (p!=NULL)                      //先输出一遍这个链表 
	{
		printf("%d   ",p->num);
		p=p->next;
	}
	printf("\n");
	r=find(head);                        //查找指定元素 
	if(r)
	{
		printf("找到了%d\n",r->num);
	}
	else
	{
		printf("未找到！\n");
	}
	
	insert1(head);                   //测试插入是否正常 
	p=head->next;
	while (p!=NULL)
	{
		printf("%d   ",p->num);
		p=p->next;
	}
	delate(head);  
	p=head->next;
	while (p!=NULL)
	{
		printf("%d   ",p->num);
		p=p->next;
	} 
	free(p);
	free(head);
}
