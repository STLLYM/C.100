#include<stdio.h>

int jishu(int a[], int k, int x) 
    {
        if (k <= 1)//�����ΧΪ0��ֱ���˳�����Ϊû�� 
            return 0;
        int count = 0 , left = 0 , s = 1 , right;
        for (right = 0; right < x; right++)
        {
            s *= a[right];
            while (s >= k)//���ڵĻ�ȥ����ǰ���Ǹ� 
            {
                s /= a[left];
                left++;
            }
            count += right - left + 1;//������k����£��ۼ�ÿ�μ�����Ԫ�غ���������� 
        }
        return count;
    }

main ()
{
	int k,m,i,j;
	printf("�������鳤�ȣ�\n"); 
	scanf("%d",&j);
	printf("���뷶Χk:");
	scanf("%d",&k); 
	int a[j];
	printf("��������ÿ��Ԫ��:\n"); 
	for (i=0;i<j;i++)
	{
		scanf("%d",&a[i]);
	}
	m = jishu(a,k,j);
	printf("��ĿΪ��\n");
	printf("%d",m);
 } 


