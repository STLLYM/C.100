#include<stdio.h>

int main()
{
	int n,m;
	int i,j; 
	int a[n];
	int b[n];
	printf("����¥�ݳ��ȣ�"); 
	scanf("%d",&n);
	printf("����ÿ�㻨�ѣ�\n"); 
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	} 
	for (i=0;i<n;i++)
	{
		m=a[i];
		b[i]=m;
		//b[i]=a[i];//��ʵֻ��ֵ��1.2����OK 
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
		printf("���ٻ���Ϊ%d",b[n-2]);
	}
	else 
	{
		printf("���ٻ���Ϊ%d",b[n-1]);
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
