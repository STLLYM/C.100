#include<stdio.h>
#include<string.h>

int main()
{
	char a[7][20]={"zhangsan","lishi","wangwu","zhaoliu","zhangqi","zhaoba"};
	char b[7][20]={"\0"};
	int i,j,k,l,m;
	/*for (i=0;i<7;i++)
	{
		printf("%s\n",a[i]);
	}*/
	for (i=0;i<7;i++)
	{
		j=i;
		for (l=j+1;l<7;l++)
		{
			m=strcmp(a[j],a[l]);
			printf("%d\n",m);
			if(m<0);
			{
				j=l;
			}
		}
		if (j!=i)
		{
			strcpy(b[i],a[j]);
		}
	}
	for (i=0;i<7;i++)
	{
		printf("%s\n",b[i]);
	}
}
