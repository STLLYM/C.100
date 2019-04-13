#include<stdio.h>
main()
{
	int x,y,z,m,n,flag=0,i,j,k,l=0;
	printf("enter the years:");
	scanf("%d",&x);
	y=(x-1)/4-(x-1)/100+(x-1)/400;
	//printf("到第%d年共%d天是多的天数",x,y);
	z=365*(x-1)+y;//计算从公元1年到输入年份共几天 
	//printf("到第%d年前一年共%d天",x,z);
	printf("enter the month:"); 
	scanf("%d",&m);
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for (n=0;n<12;++n)
	{
		if (x%4==0&&x%100!=0&&m>2||x%400==0&&m>2)
		{
			flag=1;
		}
		if (n==m-1)
		{
			break;
		}
		z+=a[n];
	}
	if (flag==1)
	z+=1;
	//printf("%d",z);//输入月份之前共多少天
	k=z%7;
	/*switch (k)
	{
		case 0:printf("周一");break;
		case 1:printf("周二");break;
		case 2:printf("周三");break;
		case 3:printf("周四");break;
		case 4:printf("周五");break;
		case 5:printf("周六");break;
		case 6:printf("周日");break;		 
	}*/
	j=0;
	printf("           公元%d年   %d月\n",x,m); 
	printf("周一  周二  周三  周四  周五  周六  周日\n");
	for (i=0;i<a[m-1];i++)
	{
		for (j=0;j<7;j++)
		{
			if (j<k&&l==0)
			{
				printf("	  ");
			}
			else
			{
				l+=1;
				printf("%-6d",l);
			}
			if (l>=a[m-1]) 
			{
				flag=2;
				break;
			}
		}
		if (flag==2)
		{
			break;
		}
		printf("\n");
	}
 } 
