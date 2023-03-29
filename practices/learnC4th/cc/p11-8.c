#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem(struct ListNode *L, int m);
void printlist(struct ListNode *L)
{
    struct ListNode *p = L;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist()
{
    struct ListNode *head = NULL, *tail = NULL, *p;
    for (int n = 0; scanf("%d", &n) && n != -1; tail = p)
    {
        p = (struct ListNode *)malloc(sizeof(struct ListNode));
        p->data = n;
        p->next = NULL;
        if (head)
            tail->next = p;
        else
            head = p;
    }
    return head;
}
struct ListNode *deletem(struct ListNode *L, int m)
{
    struct ListNode *current = L, *prev = NULL;
    while (current)
    {
        if (current->data == m)
            if (prev)
                prev->next = current->next;
            else
                L = current->next;
        else
            prev = current;
        current = current->next;
    }
    return L;
}
