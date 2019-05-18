#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,y,t;
	int *p=&x,*q=&y;
	p=(int *)malloc(sizeof(int));
	q=(int *)malloc(sizeof(int));
	scanf("%d %d",p,q);
	printf("\n%d %d\n",*p,*q);
	t = *p;
	*p = *q;
	*q = t;
	printf("%d %d",x,y);
	printf("\n%d %d\n",*p,*q);
	free(p);
	free(q);
	return 0;
 } 
