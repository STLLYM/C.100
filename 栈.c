#include<stdio.h>
#include<stdlib.h>
#define Stack_Size 50

typedef struct
{
	int elem[Stack_Size];//��֮��Ϊ�������飬���㴦��
	int top;
}SeqStack;

void InitStack(SeqStack *s)//ջ��ʼ��
{
	s->top = -1;
}

int IsEmpty(SeqStack *s)//��ջ��
{
	int flag;
	if (s->top == -1)
	{
		flag = 1;
	}
	else
	{
		flag = 0;
	}
	printf("%d", flag);
	return flag;
}

int IsFull(SeqStack *s)//��ջ��
{
	return(s->top == Stack_Size - 1 ? 0 : 1);
}

int Push(SeqStack *s, int x)//��ջ
{
	if (s->top == Stack_Size - 1)
		return 1;
	s->top++;
	s->elem[s->top] = x;
	return 0;
}

int Pop(SeqStack *s, int *x)
{
	if (s->top == -1)
		return 1;
	else
	{
		*x = s->elem[s->top];
		s->top--;
		return 0;
	}
}

int GetPop(SeqStack *s, int *x)
{
	if (s->top == -1)
		return 1;
	else
	{
		*x = s->elem[s->top];
		return 0;
	}
}

main()
{
	SeqStack *p;
	InitStack(&p);
	IsEmpty(&p);
	system("pause");
}