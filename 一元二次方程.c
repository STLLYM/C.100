#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void m(float a,float b,float c)
{
	double x1,x2;
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("方程的根是%.2lf和%.2lf",x1,x2);
}
void n(float a,float b,float c)
{
	double x;
	x=(-b)/(2*a);
	printf("方程的根为%.2lf",x);
}
void f(float a,float b,float c)
{
	printf("方程无实数根\n");
}
main()
{
	float a,b,c;
	float *p=&a, *q=&b, *o=&c;
	printf("请输入a,b,c的值\n");
	scanf("%f %f %f",p,q,o);
//	printf("%f %f %f",a,b,c);
	if(fabs(a)<1e-10)
	{
		printf("方程为一次方程，根为%.2f",(-c)/b);
		exit(0);
	}
	else if(b*b-4*a*c>0)
		m(a,b,c);
	else if(b*b-4*a*c==0)
		n(a,b,c);
	else if(b*b-4*a*c<0)
		f(a,b,c);
}
