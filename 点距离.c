#include<stdio.h>
#include<math.h>
#define N 5
int a[N][2];
double b[N][N];
double Input();
double dis();
double Output();

int main()
{
	Input();
	dis();
	Output();
	return 0;
}
double Input()
{
	int i,j;
	for (i=0;i<N;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("您输入的点坐标分别为\n    x       y\n");
	for (i=0;i<N;i++)
	{
		printf("a%d  ",i);
		for (j=0;j<2;j++)
		{
			printf("%d\t    ",a[i][j]);
		}
		printf("\n");
	}
  }  
double dis()
{
	int i,j;
	double k;
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			k=sqrt(pow((a[i][0]-a[j][0]),2)+pow((a[i][1]-a[j][1]),2));
			b[i][j]=k;
		}
	}
}
double Output()
{
	int i,j;
	double k;
	for (i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\t%-.2lf    ",b[i][j]);
		}
		printf("\n");
	}
}

