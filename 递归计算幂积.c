#include<stdio.h>
int f(int x,int n)
{
	int y,sum=x;
	if (n==1)
	{
		sum*=1;
	}
	else
	{
		sum*=f(x,n-1);
	}	
	return sum;
}
int main()
{
	int x,n,sum;
	printf("ÇëÊäÈëx,n:\n");
	scanf("%d %d",&x,&n);
	sum=f(x,n);
	printf("%d",sum);
}
