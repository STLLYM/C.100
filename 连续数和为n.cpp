/*以9为例，其所有长度为1的子序列为1，2，3，4，5，6，7，8，9
				 长度为2的子序列为3，5，7，9，11，13，15，17
				 长度为3的子序列为6，9，12...
				 长度为4的子序列为10...
而且规律是如果子序列长度为K，那么首项S1=SUM(1~k)。
并且如果（N-S1）mod k==0，那么说明N处在这个序列中，
因为是单调递增，所以只能出现一次，计数器加一*/ 
#include<stdio.h>

int con(int N) 
{
    int sum = 0;
    int i = 1;
    int ans = 0;
    while (sum<N) 
	{
        if((N-sum)%i==0)
		{
            ans++;
        }
        i++;
        sum+=i-1;
    }
    return ans;
}

main()
{
	int x;
	scanf("%d",&x);
	x = con(x);
	printf("%d",x);
}
