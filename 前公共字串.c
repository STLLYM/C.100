#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int matchStr(char** String_1, char* String_2){//放入两个字符串 
	int i;
	for(i=0; (*String_1)[i]&&String_2[i]; i++){//元素对比 
		if((*String_1)[i]==String_2[i]){
			;
		}else{
			(*String_1)[i]='\0';//当不相等时，将第一个字符串中不相等的元素变为中止符 
			break;
		}
	}
	return 1;
}

char* solve(char** strings, int num, int len){//参数分别代表放入的字符串，字符串的数目，字符串的长度 
	int i, j;
	char* string = (char*)malloc(sizeof(char)*len);//分配内存空间 
	strcpy(string, strings[0]);//将第一个放入的字符串赋值到string中 
	
	for(i=1;i<num; i++){
		matchStr(&string, strings[i]);
	}
		
	return string;//返回较短的 
}

int main()
{
	int i;
	char String_1[20];
	gets(String_1);
	char String_2[20];
	gets(String_2);
	char String_3[20];
	gets(String_3);
	char String_4[20];
	gets(String_4);
	char* strings[4] = {String_1, String_2, String_3, String_4};
	char* p = solve(strings,4,20); 
	for(i=0; (p)[i]; i++){
		putch((p)[i]);		
	}
	putch('\n');
	free(p);
} 
