#include<stdio.h>
#include<stdlib.h>
typedef struct ListNode* List;
struct ListNode
{
    int data;
    struct ListNode *next;
};
struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    for(int i = 0;i < n;i++){
        if(!fast->next)
            return head->next;
        fast = fast->next;
    }
    while(fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    struct ListNode *deleteNote = slow->next;
    slow->next = deleteNote->next;
    return head;
}
List Read()
{
    int x;
    List q, r, head;
    scanf("%d", &x);
    head = (List)malloc(sizeof(struct ListNode));
    r = head;
    while(x != -1)//以-1为结束标志   
    {
        q = (List)malloc(sizeof(struct ListNode));
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
int main()
{
    int x;
    printf("输入要删除的倒数第n个节点：\n");
    scanf ("%d",&x);
    List s1;
    s1 = Read();
    removeNthFromEnd(s1, x);
    Print(s1);
    return 0;
}


