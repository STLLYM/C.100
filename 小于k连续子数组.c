#include<stdio.h>

int jishu(int a[], int k, int x) 
    {
        if (k <= 1)//如果范围为0则直接退出，因为没有 
            return 0;
        int count = 0 , left = 0 , s = 1 , right;
        for (right = 0; right < x; right++)
        {
            s *= a[right];
            while (s >= k)//大于的话去除最前边那个 
            {
                s /= a[left];
                left++;
            }
            count += right - left + 1;//不大于k情况下，累加每次加入新元素后子数组个数 
        }
        return count;
    }

main ()
{
	int k,m,i,j;
	printf("输入数组长度：\n"); 
	scanf("%d",&j);
	printf("输入范围k:");
	scanf("%d",&k); 
	int a[j];
	printf("输入数组每个元素:\n"); 
	for (i=0;i<j;i++)
	{
		scanf("%d",&a[i]);
	}
	m = jishu(a,k,j);
	printf("数目为：\n");
	printf("%d",m);
 } 


