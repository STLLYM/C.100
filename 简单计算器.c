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
		printf("输入错误，分母不能为0\n按任意键返回上层\n");
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
	printf("*************简单计算器*************\n(可实现两个数的加减乘除以及乘方运算)\n");
	printf("(对应符号为)           +  -  *  /  ^\n\n");
	printf("************************************\n\n");
	printf("***********1.进入计算器*************\n\n");
	printf("***********   2.帮助   *************\n\n");
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
		printf("未被定义，按任意键返回上层\n") ;
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
	printf("*************简单计算器*************\n(可实现两个数的加减乘除以及乘方运算)\n");
	printf("(对应符号为)           +  -  *  /  ^\n");
	scanf("%lf%c%lf",&x,&choose,&y);
	switch (choose)
	{
		case '+':z=add(x,y);break;
		case '-':z=sub(x,y);break;
		case '*':z=mul(x,y);break;
		case '/':z=divi(x,y);break;
		case '^':z=power(x,y);break; 
		default :printf("该运算未被定义，按任意键返回上层\n") ;
				 getch();
				 system("cls");
				 main1(); 
	}
	if(fabs(z-(int)z)<1e-10)
	{
		flag=1;
		printf("运算结果为%d\n",(int)z);
	 } 
	else
	{
		printf("运算结果为%.2lf\n",z);
	}
	int i;
	printf("如果继续运算则按enter，退出按任意键\n");
	i=getch();
	system("cls");
	if (i==13)
	{
		if (flag==1)
		{
			printf("上次运算结果为%15d\n",(int)z);
		}
		else
		{
			printf("上次运算结果为%15.2lf\n",z);
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
	printf("阅读以下注意事项：\n");
	printf("1.加减乘除均可输入小数进行运算；\n");
	printf("2.在进行乘方运算时幂指数必须为整数；\n");
	printf("3.系统会自动保留上次的运算结果，\n");
	printf("  方便下次计算可能会用到的查询.\n");
	printf("4.无法进行字母运算.\n");
	printf("按任意键返回上层@_@\n");
	i=getch();
	system("cls");
	main();

	
}
