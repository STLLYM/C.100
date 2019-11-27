#include<stdio.h>
int js(int x)//用于计算输入数字的每位上数字的和 
{
	int sum=0,y=x,i;
	if (x>=0&&x<10)
	{
		sum+=x;
	}
	else 
	{
		i=y%10;//i用于保存每次取余操作后的余数 
		sum=js(y/10)+i;
	}
	return sum;
}
main()
{
	int m,j;
	scanf("%d",&m);
	while(m>=10)
	{
		m=js(m);
	}
	printf("%d",m);
	
}
