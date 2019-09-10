#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isprime(int x)
{
	int i;
	for (i = 2; i <= sqrt(x); i++)
		if (x%i == 0)
			return 0;
	return 1;
}

main()
{
	int x, flag, n, i=0, sum=0;
	int *list;
	printf("ÊäÈë£º");
	scanf_s("%d", &x);
	list = (int*)malloc(sizeof(int)*x);
	for (i = 0; i < x; i++)
	{
		list[i] = 0;
	}
	i = 0;
	for (n = 2; n < x; n++)
	{
		flag = isprime(n);
		if (flag == 1)
		{
			list[i] = n;
			i++;
		}
	}
	for (i = 0; i < x; i++)
	{
		if (list[i] != 0)
		{
			//printf("%d\n", list[i]);
			sum++;
		}
	}
	printf("Êä³ö£º");
	printf("%d\n", sum);
	free(list);
	system("pause");
}
