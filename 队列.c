#include<stdio.h>
#include<stdlib.h>
#define maxsize 50
typedef struct
{
	int element[maxsize];//һά����
	int front;
	int rear;
}SeqQueue;
SeqQueue *q;

void InitQueue(SeqQueue *q)//��ʼ��
{
	q->front = q->rear = maxsize - 1;
}

int EnterQueue(SeqQueue *q, int x)//���
{
	int flag;
	if ((q->rear + 1) % maxsize == q->front)
		return flag = 0;
	q->rear = (q->rear + 1) % maxsize;
	q->element[q->rear] = x;
	return flag = 1;
}

int DeleteQueue(SeqQueue *q, int x)//����
{
	int flag;
	if (q->front == q->rear)
		return flag=0;
	q->front = (q->front + 1) % maxsize;
	x = q->element[q->front];
	return flag = 1;
}