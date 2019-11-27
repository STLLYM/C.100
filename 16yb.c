#include<stdio.h>
#define N 16
main()
{
	printf("½«Ó²±Ò´Ó0~15±àºÅºó\n"); 
	int a[N]={1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1};
	int b[N/2]={0};
	int c[N/4]={0};
	int d[N/8]={0};
	int i,x=0,y=0,z=0,m=0,e=0,f=0,g;
	for (i=0;i<N/2;i++)
	{
		x+=a[i];
		y+=a[i+8];		
	}
	if (x>y)
	{
		for(i=0;i<N/2;i++)
		{
			b[i]=a[i+8];
		}
	}
	else 
	{
		for(i=0;i<N/2;i++)
		{
			b[i]=a[i];
		}
	}
	for (i=0;i<N/4;i++)
	{
		z+=a[i];
		m+=a[i+4];		
	}
	if (z>m)
	{
		for(i=0;i<N/4;i++)
		{
			c[i]=b[i+4];
		}
	}
	else 
	{
		for(i=0;i<N/4;i++)
		{
			c[i]=b[i];
		}
	}
	for (i=0;i<N/8;i++)
	{
		e+=a[i];
		f+=a[i+2];		
	}
	if (e>f)
	{
		for(i=0;i<N/8;i++)
		{
			d[i]=c[i+2];
		}
	}
	else 
	{
		for(i=0;i<N/4;i++)
		{
			d[i]=c[i];
		}
	}
	if (d[0]<d[1])
	{
		g=d[0];
	}
	else
	{
		g=d[1];
	}
	//printf("%d",g);
	for (i=0;i<N;i++)
	{
		if (g==a[i])
		{
			printf("Îª±àºÅ%dµÄÓ²±Ò",i);
			break;
		}
	}

}
