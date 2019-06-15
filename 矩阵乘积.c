#include<stdio.h>

main()
{
	int a[3][3]={0,1,2,3,4,5,6,7,8};
	int b[3][3]={1,2,3,4,5,6,7,8,9};
	int c[3][3]={0};
	int (*p)[3],(*m)[3],(*n)[3];
	int i=0,j=0,k=0,x,y;
	for (p = a; p<a+3; p++)
	{
		
		for (m = b; m<b+3; m++)
		{	
			n = b;  //因为在计算时m会变，所以另取n存放b 
			for(k=0;k<3;k++)
			{
				c[i][j] += (*((*p)+k))*(*((*(n+k)+j)));			
			}
			j++;
		}
		i++;
		j=0;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	
	
} 
