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
    while(x != -1)//以-1为结束标志   
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
List del(List head) //删除函数 
{
    struct Node *node;
    struct Node *p_head;
    
    if(head != NULL)
    {
        if(head->next != NULL)//不为空即继续向下检索 
        {
            node   = head->next;
            p_head = head;
        }
        else
        {
            return head;//为空就返回头  然后在最后输出为空 
        }
    }
    while(node != NULL)//不为空时  则开始进行比较判断 
    {
        if(node->data == p_head->data)//相等时  跳过（删除）一个重复的
        {
            p_head->next = node->next;
            node         = p_head->next;
        }
        else//不相等时继续检索 
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

