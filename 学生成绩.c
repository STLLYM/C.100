#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 5
struct stu
{
	char nam[20],num[20],sex[10];//����  ����  ���  �Ա� 
	double k1,k2,k3,k4;	//�ĸ���Ŀ 
	double kk; //�ĿƵ�ƽ�� 
	double fc;//���� 
}st[N+1];

double sord(int x)
{
	int j,k;
	double y;
	char str1[20],str2[20],str3[20];
	if (x==1)//����ð������Ľṹ����ƶ� 
	{
		for (j=0;j<N;j++)
		{
			for (k=0;k<N-1-j;k++)
			{
				if( st[k].k1<st[k+1].k1)
				{
					st[N+1]=st[k+1];
					st[k+1]=st[k];
					st[k]=st[N+1];
				}
			}		
		} 
	}
	else if (x==2)
	{
		for (j=0;j<N;j++)
		{
			for (k=0;k<N-1-j;k++)
			{
				if( st[k].k2<st[k+1].k2)
				{
					st[N+1]=st[k+1];
					st[k+1]=st[k];
					st[k]=st[N+1];
				}
			}		
		} 
	}
	else if (x==3)
	{
		for (j=0;j<N;j++)
		{
			for (k=0;k<N-1-j;k++)
			{
				if( st[k].k3<st[k+1].k3)
				{
					st[N+1]=st[k+1];
					st[k+1]=st[k];
					st[k]=st[N+1];
				}
			}		
		} 
	}
	else if (x==4)
	{
		for (j=0;j<N;j++)
		{
			for (k=0;k<N-1-j;k++)
			{
				if( st[k].k4<st[k+1].k4)
				{
					st[N+1]=st[k+1];
					st[k+1]=st[k];
					st[k]=st[N+1];
				}
			}		
		} 
	}
	else
	{
		for (j=0;j<N;j++)
		{
			for (k=0;k<N-1-j;k++)
			{
				if( st[k].kk<st[k+1].kk)
				{
					st[N+1]=st[k+1];
					st[k+1]=st[k];
					st[k]=st[N+1];
				}
			}		
		} 
	}	
	return;
}
main()
{
	int i,j,k;
	char str1;
	double sum1=0,sum2=0,sum3=0,sum4=0,sum=0,s1,s2,s3,s4,s,fc;
	printf("������ѧ��ѧ�ţ��������Ա��ĿƳɼ�:\n");
	for(i=0;i<N;i++)
	{
		printf("������ѧ��ѧ��:\n");scanf("%s",st[i].num);
		printf("������ѧ������:\n");scanf("%s",st[i].nam);
		printf("������ѧ���Ա�:\n");scanf("%s",st[i].sex);
		printf("������ѧ���ĿƳɼ�:\n");
		scanf("%lf",&st[i].k1);
		scanf("%lf",&st[i].k2);
		scanf("%lf",&st[i].k3);
		scanf("%lf",&st[i].k4);
		st[i].kk=(st[i].k1+st[i].k2+st[i].k3+st[i].k4)/4;
		printf("***\n"); 
		//printf("%lf",st[i].k);
	} 
	for (i=0;i<N;i++)
	{
		sum1+=st[i].k1;
		sum2+=st[i].k2;
		sum3+=st[i].k3;
		sum4+=st[i].k4;
		sum+=st[i].kk;
	}
	s1=sum1/N;//��ȫ���ֵ(���Ƽ�����) 
	s2=sum2/N;
	s3=sum3/N;
	s4=sum4/N;
	s=sum/N;
	printf("���밴���ĿƳɼ�����\n1.k1\t2.k2\t3.k3\t4.k4\t5.kk\n");
	scanf("%d",&k);
	//printf("%d",k);
	switch (k)
	{
		case 1:sord(1);break;
		case 2:sord(2);break;
		case 3:sord(3);break;
		case 4:sord(4);break;
		case 5:sord(5);break;
		default :printf("��������");break; 
	}
	printf("����ѡ����Ŀ�������£�\n");
	printf("number  name  sex  k1    k2    k3    k4    kk    fc\n");
	for (i=0;i<N;i++)
	{
		st[i].fc=sqrt(pow(st[i].kk-s,2));
		printf("%s  %s  %s  %.2lf %.2lf %.2lf %.2lf %.2lf %.2lf\n",st[i].num,st[i].nam,st[i].sex,st[i].k1,st[i].k2,st[i].k3,st[i].k4,st[i].kk,st[i].fc);
	}
	printf("ȫ�����Ŀ����Ϊ��\n\tk1\tk2\tk3\tk4\n");
	printf("%.2lf %.2lf %.2lf %.2lf\n",s1,s2,s3,s4);	
}
