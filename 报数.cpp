#include<stdio.h>
#include<stdlib.h>
//定义一个链表
typedef struct Linklist
{
	int date;
	struct Linklist *next;
 } Linklist;

Linklist* create_list(int m )//控制链表中元素的个数
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
    return head;//返回头指针
}
void Num(Linklist *head,int n,int m)  //n:总人数     m:出列的数字
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
    int n,m;//确定总共的人数和出列数字
    Linklist *head;
    printf("请输入总共的人数：\n");
    scanf("%d",&n);
    printf("请输入出列的数字：\n");
    scanf("%d",&m);
    head=create_list(n);
	if(n<0||n==0) printf("错误的输入\n");
	else{
		if(n==1) printf("1\n");
		else
		{
			printf("输出顺序是：\n");
			Num(head,n,m);
		}
	}
    return 0;
 }

