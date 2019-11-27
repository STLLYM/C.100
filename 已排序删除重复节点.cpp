#include<stdio.h> 
#include<stdlib.h>
typedef struct Node* List;
struct Node 
{
    int data;
    struct Node *next;
};
struct Node* Read()
{
    int x;
    List q, r, head;
    scanf("%d", &x);
    head = (List)malloc(sizeof(struct Node));
    r = head;
    while(x != -1)//��-1Ϊ������־   
    {
        q = (List)malloc(sizeof(struct Node));
        q->data = x;
        r->next = q;
        r = q;
        scanf("%d", &x);
    }
    r->next = NULL;
    return head;
}
void Print(List s)
{
    int k;
    k = 0;
    s = s->next;
    if(s == NULL)
    {
        printf("NULL");
        return ;
    }
    while(s != NULL)
    {
        if(k != 0)
            printf(" ");
        printf("%d", s->data);
        s = s->next;
        k++;
    }
    printf("\n");
    return ;
}
List del(List head) //ɾ������ 
{
    struct Node *node;
    struct Node *p_head;
    
    if(head != NULL)
    {
        if(head->next != NULL)//��Ϊ�ռ��������¼��� 
        {
            node   = head->next;
            p_head = head;
        }
        else
        {
            return head;//Ϊ�վͷ���ͷ  Ȼ����������Ϊ�� 
        }
    }
    while(node != NULL)//��Ϊ��ʱ  ��ʼ���бȽ��ж� 
    {
        if(node->data == p_head->data)//���ʱ  ������ɾ����һ���ظ���
        {
            p_head->next = node->next;
            node         = p_head->next;
        }
        else//�����ʱ�������� 
        {
            node = node->next;
            p_head = p_head->next;
        }
    }
    
    
    return head;
}
int main()
{
	int x;
	List s1;
	s1 = Read();
	del(s1);
	Print(s1);
	return 0;
}

