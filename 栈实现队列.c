#include<stdio.h>
#include<stdlib.h>
#define MaxSize 5

typedef struct
{
	int front;
	int rear;
	int size;
	int *array;
} MyQueue;

MyQueue* myQueueCreate() 
{
	MyQueue *a;
	a = malloc(sizeof(MyQueue));
	a->array = (int*)malloc(sizeof(int)*MaxSize);
	a->front = 0;
	a->rear = 0;
	a->size = 0;
	return a;
}

int myQueueEmpty(MyQueue* obj)
{
	if (obj->size == 0)
		return 1;
	else
		return 0;
}

int myQueueIsFull(MyQueue* obj)
{
	if (obj->size == MaxSize)
		return 1;
	else
		return 0;
}
void myQueuePush(MyQueue* obj, int x) 
{
	int flag;
	flag = myQueueIsFull(obj);
	if (flag == 0)
	{
		obj->array[obj->rear] = x;
		obj->size++;
		obj->rear++;
	}
}

int myQueuePop(MyQueue* obj) 
{
	int first = obj->front;
	int num = 0;
	num = obj->array[first];
	obj->front = first + 1;
	obj->size--;
	return num;
}

int myQueuePeek(MyQueue* obj) //查看队首元素
{
	printf("%d", obj->array[obj->front]);
	return obj->array[obj->front];
}

int myQueueFull(MyQueue* obj)
{
	if (obj->size == MaxSize)
		return 1;
	else
		return 0;
}

int main()
{
	MyQueue* pQ;
	pQ = myQueueCreate();
	myQueuePush(pQ, 1);
	myQueuePush(pQ, 2);
	myQueuePush(pQ, 3);
	myQueuePush(pQ, 4);
	myQueuePush(pQ, 5);
	myQueuePush(pQ, 6);
	myQueuePeek(pQ);
	myQueuePop(pQ);
	printf("\n");
	myQueuePeek(pQ);
	myQueuePop(pQ);
	printf("\n");
	myQueuePeek(pQ);
	myQueuePop(pQ);
	printf("\n");
	myQueuePeek(pQ);
	myQueuePop(pQ);
	printf("\n");
	myQueuePeek(pQ);
	myQueuePop(pQ);
	printf("\n");
	system("pause");
	return 0;
 }
