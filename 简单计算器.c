#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
double add(double x,double y)
{
	double z;
	z=x+y;
	return z;
}
double sub(double x,double y)
{
	double z;
	z=x-y;
	return z;
}
double mul(double x,double y)
{
	double z;
	z=x*y;
	return z;
}
double divi(double x,double y)
{
	double z;
	if (y==0)
	{
		printf("������󣬷�ĸ����Ϊ0\n������������ϲ�\n");
		getch();
		system("cls");
		main1();
	}
	else
	{
		z=x/y;		
	}
}
double power(double x,int y)
{
	double z;
	z=pow(x,y);
	return z;
}
main ()
{
	system("color 3F");
	printf("*************�򵥼�����*************\n(��ʵ���������ļӼ��˳��Լ��˷�����)\n");
	printf("(��Ӧ����Ϊ)           +  -  *  /  ^\n\n");
	printf("************************************\n\n");
	printf("***********1.���������*************\n\n");
	printf("***********   2.����   *************\n\n");
	printf("************************************\n\n");
	char choose1;
	choose1=getch();
	system("cls"); 
	switch (choose1)
	{
		case '1':
		main1();break;
		case '2':
		system("cls");main2();break;
		default :
		printf("δ�����壬������������ϲ�\n") ;
				 getch();
				 system("cls");
				 main(); 
	}
} 
main1 ()
{
	double x,y,z;
	char choose;
	int flag=0;
	printf("*************�򵥼�����*************\n(��ʵ���������ļӼ��˳��Լ��˷�����)\n");
	printf("(��Ӧ����Ϊ)           +  -  *  /  ^\n");
	scanf("%lf%c%lf",&x,&choose,&y);
	switch (choose)
	{
		case '+':z=add(x,y);break;
		case '-':z=sub(x,y);break;
		case '*':z=mul(x,y);break;
		case '/':z=divi(x,y);break;
		case '^':z=power(x,y);break; 
		default :printf("������δ�����壬������������ϲ�\n") ;
				 getch();
				 system("cls");
				 main1(); 
	}
	if(fabs(z-(int)z)<1e-10)
	{
		flag=1;
		printf("������Ϊ%d\n",(int)z);
	 } 
	else
	{
		printf("������Ϊ%.2lf\n",z);
	}
	int i;
	printf("�������������enter���˳��������\n");
	i=getch();
	system("cls");
	if (i==13)
	{
		if (flag==1)
		{
			printf("�ϴ�������Ϊ%15d\n",(int)z);
		}
		else
		{
			printf("�ϴ�������Ϊ%15.2lf\n",z);
		}
		main1();
	}
	else
	{
		exit(0);
	}
	
}
main2()
{
	int i;
	printf("�Ķ�����ע�����\n");
	printf("1.�Ӽ��˳���������С���������㣻\n");
	printf("2.�ڽ��г˷�����ʱ��ָ������Ϊ������\n");
	printf("3.ϵͳ���Զ������ϴε���������\n");
	printf("  �����´μ�����ܻ��õ��Ĳ�ѯ.\n");
	printf("4.�޷�������ĸ����.\n");
	printf("������������ϲ�@_@\n");
	i=getch();
	system("cls");
	main();

	
}
