#include<stdio.h>
#include<stdlib.h>
#define N 1000
int numb;
typedef struct stu* List;
struct stu
{
	int num;
	struct stu *next;
};
List creat(List a[N])
{
	List head, p, q;
	int i,j=0;
	head = (List)malloc(sizeof(struct stu));
	q=head;
	head->next=NULL; 
	scanf("%d",&i);
	while(i!=-1)
	{
		p = (List)malloc(sizeof(struct stu));
		p->num = i;
		a[j] = p;
		j++;
		p->next = NULL;
		q->next = p;
		q = p;
		scanf("%d",&i);
	}	
	numb = j;
	return head;
}
List print(List head)
{
	List m,p;
	p = head;
	if (head->next==NULL)
	{
		printf("Á´±íÎª¿Õ¡£¡£¡£");
		return NULL; 
	}
	while(p->next!=NULL)
	{
		m = p->next;
		printf("%d  ",m->num);
		p = m;
	}
}
List sord(List a[N],int b)
{
	int j,k;
	List l;
	l = (List)malloc(sizeof(struct stu));
	for (j=0;j<N;j++)
	{
		for (k=0;k<N-1-j;k++)
		{
			if( k+1==numb)
			{
				break;
			}
			if( (a[k]->num) < (a[k+1]->num) )
			{
				l=a[k+1];
				a[k+1]=a[k];
				a[k]=l;
			}
		}		
	} 
}
main()
{
	int i;
	List ss;
	List a[N];
	ss = creat(a);
	print(ss);
	sord(a,numb);
	printf("\n");
	for (i=0;i<numb;i++)
	{
		printf("%d  ", a[i]->num);
	}
}
