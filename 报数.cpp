#include<stdio.h>
#include<stdlib.h>
//����һ������
typedef struct Linklist
{
	int date;
	struct Linklist *next;
 } Linklist;

Linklist* create_list(int m )//����������Ԫ�صĸ���
{
    Linklist *p,*newd,*head;
    head=(Linklist *)malloc(sizeof(Linklist));
    head->date=1;
    p=head;
    for(int i=2;i<=m;++i)
    {
        newd=(Linklist *)malloc(sizeof(Linklist));
        p->next=newd;
        newd->date=i;
        p=p->next;
    }
    p->next=head;
    return head;//����ͷָ��
}
void Num(Linklist *head,int n,int m)  //n:������     m:���е�����
{
	Linklist *p;
    p=head;
	for (int j=1;j<=n;++j)
   {
        for(int i=1;i<m;++i)  
			p=p->next;
        printf("%d\n",p->date);
        p->date=p->next->date;
        p=p->next; 
   }
}
int main()
{
    int n,m;//ȷ���ܹ��������ͳ�������
    Linklist *head;
    printf("�������ܹ���������\n");
    scanf("%d",&n);
    printf("��������е����֣�\n");
    scanf("%d",&m);
    head=create_list(n);
	if(n<0||n==0) printf("���������\n");
	else{
		if(n==1) printf("1\n");
		else
		{
			printf("���˳���ǣ�\n");
			Num(head,n,m);
		}
	}
    return 0;
 }

