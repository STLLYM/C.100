#include<stdio.h>

void js(int numb, int N, int K)
{
        if (N == 0) 
		{	
			printf("%5d",numb);
            return;
        }
        int last = numb % 10;
        if (last + K <= 9)   //������֧�����жϸ�λ�����Ƿ����10��С�ڵ���0�������ݹ� 
            js( numb * 10 + last + K, N - 1, K);  //N-1 ���ڿ��Ƶݹ鼸�Σ�Ҳ��������ĳ��� 
        if (last - K >= 0)
            js( numb * 10 + last - K, N - 1, K);
}

int main(void)
{
	int L,K,i;
	printf("�����볤�Ⱥ;���ֵ��\n");
	scanf("%d %d",&L,&K);
	for (i = 1;i < 10; i++)
	{
		js(i , L-1, K);  //L-1����Ϊi�Ѿ�Ϊ��һλ�������Ѿ�������1 
	}
	return 0;
} 


