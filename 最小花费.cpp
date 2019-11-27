#include<stdio.h>

int main()
{
	int n,m;
	int i,j; 
	int a[n];
	int b[n];
	printf("输入楼梯长度："); 
	scanf("%d",&n);
	printf("输入每层花费：\n"); 
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	} 
	for (i=0;i<n;i++)
	{
		m=a[i];
		b[i]=m;
		//b[i]=a[i];//其实只赋值第1.2个就OK 
	}
	for (i=2;i<n;i++)
	{
		if (b[i-1]<b[i-2])
		{
		    b[i]=a[i]+b[i-1];
		}
		else 
		{
			b[i]=a[i]+b[i-2];
		}
	}
	if  (b[n-1]>b[n-2])
	{
		printf("最少花费为%d",b[n-2]);
	}
	else 
	{
		printf("最少花费为%d",b[n-1]);
	}	
//	printf("\n");
//	for(i=0; i<n; i++)
//	{
//		printf("%d  ",a[i]);
//	} 
//	printf("\n");
//	for(i=0; i<n; i++)
//	{
//		printf("%d  ",b[i]);
//	} 
	
}
