#include<stdio.h>

void f(int *p,int *q,int *o,int n,int m)
{
	int i,j,k=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if (*(p+i)==*(q+j))
			{
				*(o+k)=*(p+i);
				k+=1;
			}
		}
	}
 } 
int main()
{
	int m,n,i,j,x,k;
	scanf("%d %d",&m,&n);
	x=m>n?n:m;
	int a[m],b[n],c[x],d[x];
	int *p=a,*q=b,*o=c;
	printf("输入a数组：\n");
	for (i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("输入b数组：\n");
	for (i=0;i<n;i++) 
	{
		scanf("%d",&b[i]);
	}
	f(p,q,o,m,n);
//	for (i=0;i<x;i++)
//	{
//		d[i]=c[i];
//	}
	for (i=0;i<x;i++)
	{
		for(j=0;j<x-1-i;j++)
		{
			if(c[j]<c[j+1])
			{
				k=c[j];
				c[j]=c[j+1];
				c[j+1]=k;
			}
		}
	}
	printf("%d  ",c[0]);
	for (i=1;i<x;i++)
	{
		if (c[i]!=c[i-1])
		{
			printf("%d  ",c[i]);
		}
	}
}
