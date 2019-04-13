#include<stdio.h>
main()
{
	int a[10]={0};
	int i,j,k,l,t;
	for (i=0;i<10;i++)
	{
		a[i]=rand()%100;
		printf("%3d",a[i]);
	}
	printf("\n");
	for (j=0;j<10-1;j++)
	{
		k=j;
		for (l=j+1;l<10;l++)
		{
			if (a[k]<a[l])
			{
				k=l;
			}
		}
		if (k!=j)
		{
			t=a[j];
			a[j]=a[k];
			a[k]=t;
		}
	}
	for (i=0;i<10;i++)
	{
		printf("%3d",a[i]);
	}
}
