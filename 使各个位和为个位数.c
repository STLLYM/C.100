#include<stdio.h>
int js(int x)//���ڼ����������ֵ�ÿλ�����ֵĺ� 
{
	int sum=0,y=x,i;
	if (x>=0&&x<10)
	{
		sum+=x;
	}
	else 
	{
		i=y%10;//i���ڱ���ÿ��ȡ������������ 
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
