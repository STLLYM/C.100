#include<stdio.h>

void js(int numb, int N, int K)
{
        if (N == 0) 
		{	
			printf("%5d",numb);
            return;
        }
        int last = numb % 10;
        if (last + K <= 9)   //两个分支用于判断该位数字是否大于10或小于等于0，后调入递归 
            js( numb * 10 + last + K, N - 1, K);  //N-1 用于控制递归几次，也就是输入的长度 
        if (last - K >= 0)
            js( numb * 10 + last - K, N - 1, K);
}

int main(void)
{
	int L,K,i;
	printf("请输入长度和绝对值：\n");
	scanf("%d %d",&L,&K);
	for (i = 1;i < 10; i++)
	{
		js(i , L-1, K);  //L-1，因为i已经为第一位，长度已经减少了1 
	}
	return 0;
} 


