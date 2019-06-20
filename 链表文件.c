#include<stdio.h>
#include<stdlib.h>

typedef struct stu* List;
struct stu
{
	char num[10],nam[10];
	int score;
	struct stu *next;
};
List creat1()
{
	List head, p1, p2;

	head = (List)malloc(sizeof(struct stu));
	head -> next = NULL;
	p1 = head;
	int x;
	char s1; 
	printf("是否开始创建？y/n：");
	s1=getchar();
	while (s1 == 'y'||s1 == 'Y')
	{	
		p2 = (List)malloc(sizeof(struct stu));
		scanf("%s",&p2->num);
		scanf("%s",&p2->nam);
		scanf("%d",&p2->score);
		p2->next = NULL;
		p1->next = p2;
		p1 = p2;
		printf("是否继续创建？y/n：");
		s1=getchar();
		scanf("%c", &s1);
	}
	return head;
}
List creat2()
{
	List head,p1,p2;
	char na[10],nu[10];
	int x;
	FILE *fp;
	fp = fopen("信息.txt","r");
	head = (List)malloc(sizeof(struct stu));
	head -> next = NULL;
	p1 = head;
	while(!feof(fp))
	{
		p2 = (List)malloc(sizeof(struct stu));
		fscanf(fp,"%s %s %d ",p2->num,p2->nam,&p2->score);
		p2->next = NULL;
		p1->next = p2;
		p1 = p2; 
	}
	fclose(fp);
	return head;	
}


main()
{
	List p,q;
	FILE *fp;
	fp = fopen("信息.txt","w");
	p=creat1();
	p=p->next;
	while(p)
	{
		printf("%s %s %d \n",p->num,p->nam,p->score);
		fprintf(fp,"%s %s %d ",p->num,p->nam,p->score);
		p=p->next;
	}
	fclose(fp);
	q = creat2();
	q = q->next;
	while(q)
	{
		printf("%s %s %d \n",q->num,q->nam,q->score);
		q=q->next;
	}
}
