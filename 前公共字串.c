#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int matchStr(char** String_1, char* String_2){//���������ַ��� 
	int i;
	for(i=0; (*String_1)[i]&&String_2[i]; i++){//Ԫ�ضԱ� 
		if((*String_1)[i]==String_2[i]){
			;
		}else{
			(*String_1)[i]='\0';//�������ʱ������һ���ַ����в���ȵ�Ԫ�ر�Ϊ��ֹ�� 
			break;
		}
	}
	return 1;
}

char* solve(char** strings, int num, int len){//�����ֱ���������ַ������ַ�������Ŀ���ַ����ĳ��� 
	int i, j;
	char* string = (char*)malloc(sizeof(char)*len);//�����ڴ�ռ� 
	strcpy(string, strings[0]);//����һ��������ַ�����ֵ��string�� 
	
	for(i=1;i<num; i++){
		matchStr(&string, strings[i]);
	}
		
	return string;//���ؽ϶̵� 
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
