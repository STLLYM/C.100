#include<stdio.h>
int js(int x)
{
	int z;
	if (x==1)
		z=1;
	else if (x==2)
		z=2;
	else
		z=js(x-1)+js(x-2);
	return z;
	
}
main()
{
	int x,y;
	printf("����̨��������"); 
	scanf("%d",&x);
	y=js(x);
	printf("����%d��̨�׹���%d�ַ���",x,y);
}
