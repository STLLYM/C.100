#include<stdio.h>
main()
{
	int x,y,z,m,n,flag=0,i,j,k,l=0;
	printf("enter the years:");
	scanf("%d",&x);
	y=(x-1)/4-(x-1)/100+(x-1)/400;
	//printf("����%d�깲%d���Ƕ������",x,y);
	z=365*(x-1)+y;//����ӹ�Ԫ1�굽������ݹ����� 
	//printf("����%d��ǰһ�깲%d��",x,z);
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
	//printf("%d",z);//�����·�֮ǰ��������
	k=z%7;
	/*switch (k)
	{
		case 0:printf("��һ");break;
		case 1:printf("�ܶ�");break;
		case 2:printf("����");break;
		case 3:printf("����");break;
		case 4:printf("����");break;
		case 5:printf("����");break;
		case 6:printf("����");break;		 
	}*/
	j=0;
	printf("           ��Ԫ%d��   %d��\n",x,m); 
	printf("��һ  �ܶ�  ����  ����  ����  ����  ����\n");
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
