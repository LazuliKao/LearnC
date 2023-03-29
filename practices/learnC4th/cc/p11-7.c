#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd(struct ListNode **L);
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
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
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
struct ListNode *getodd(struct ListNode **L)
{
    struct ListNode *headOdd = NULL, *headEven = NULL, *tailOdd = NULL, *tailEven = NULL, *p = *L;
    while (p)
    {
        if (p->data % 2)
            tailOdd = headOdd ? (tailOdd->next = p) : (headOdd = p);
        else
            tailEven = headEven ? (tailEven->next = p) : (headEven = p);
        p = p->next;
    }
    if (tailOdd)
        tailOdd->next = NULL;
    if (tailEven)
        tailEven->next = NULL;
    *L = headEven;
    return headOdd;
}
