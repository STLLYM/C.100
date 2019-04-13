#include<stdio.h>
main()
{
	int a[10]={0};
	int i,j,k,l;
	for (i=0;i<10;i++)
	{
		a[i]=rand()%100;
		printf("%3d",a[i]);
	}
	printf("\n");
	for (j=0;j<10;j++)
	{
		for (k=0;k<10-1-j;k++)
		{
			if( a[k]>a[k+1])
			{
				l=a[k];
				a[k]=a[k+1];
				a[k+1]=l;
			}
		}
	}
	for (i=0;i<10;i++)
	{
		printf("%3d",a[i]);
	}
	
}
