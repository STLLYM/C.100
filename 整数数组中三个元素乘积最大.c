#include<stdio.h>
#include<math.h>

main()
{
	int a[10000] = {0};
	int i=0,j,k,l;
	int sum1,sum2,sum;
	printf("输入数组长度：");
	scanf("%d",&j);
	for(i=0;i<j;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<j;i++)
	{
		for(k=0;k<j-i-1;k++)
		{
			if(a[k]<a[k+1])
			{
				l = a[k];
				a[k] = a[k+1];
				a[k+1] = l;
			}
		}
	}
	sum1 = a[0]*a[1]*a[2];
	sum2 = a[0]*a[-1]*a[-2];
	sum = sum1>sum2?sum1:sum2;
	printf("%d",sum);
}
