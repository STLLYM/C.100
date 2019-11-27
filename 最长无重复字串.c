#include<stdio.h> 
int f(char* s) {
    char* p = s;
	int i = 0, j = 0, len = 0;
	for(j = 0; *(p+j) != '\0'; j++)//寻找最长到那位，也就是最多到字符串的有效长度 
	{
		for(i = 0; i < j; i++)//遍历第j位之前的字符串，准备寻找重复字符 
		{
			if(*(p+i) == *(p+j))//寻找到相同字符 
			{
				p = p + i + 1;//构造由i所代表的元素后一个元素开始到最后一个元素的新字符串 
				if(j > len) 
					len = j;//记录此时到达j元素的长度，方便之后进行比较 
				j = 0;//j归0后进行下一次寻找，从上文所说的新字符串中 
                break;
			}
		}
	}
	len = (j > len )? j : len;//选取长度和最后一次赋值后的len进行比较，取较大值 
	return len;
}
int main()
{
	char a[50];
	int b;
	gets(a);
	b=f(a);
	printf("%d",b);
}
