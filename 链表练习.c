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
	printf("\n����Ҫ���ҵ����֣�\n");
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
void insert1(List p0)//ͷ��
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
void insert2(List p0)//β�� 
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
void insert3(List p0)//�м��(�������ź�˳��)
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
int delate(List p0)                        //ɾ������ֻɾ����һ������Ԫ�� 
{
	int x,y;
	List p;
	p=p0->next;
	if (p==NULL) return 0;
	printf("����ɾ�������֣�");
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
	while(x!=-1)//��-1Ϊ��־�жϽ���
	{
		p = (List)malloc(sizeof(struct stu));
		p -> num = x;
		q -> next = p;
		q = p;
		scanf ("%d",&x);
	} 
	q->next=NULL;
	p=head->next;
	while (p!=NULL)                      //�����һ��������� 
	{
		printf("%d   ",p->num);
		p=p->next;
	}
	printf("\n");
	r=find(head);                        //����ָ��Ԫ�� 
	if(r)
	{
		printf("�ҵ���%d\n",r->num);
	}
	else
	{
		printf("δ�ҵ���\n");
	}
	
	insert1(head);                   //���Բ����Ƿ����� 
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
