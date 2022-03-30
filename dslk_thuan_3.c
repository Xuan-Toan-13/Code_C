#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct
{
    Node *first;
    Node *last;
} Linkedlist;

void init_list(Linkedlist *plist)
{
    plist->first=NULL;
    plist->last=NULL;
}

Node* create_new_node(int *value)
{
    Node *node=(Node*)malloc(sizeof(Node));
    if(node == NULL) return 0;
    node->data= *value;
    node->next=NULL;
    return node;
}
void add_tail(Linkedlist *l, Node *p)
{
    if(l->first == NULL)
    {
        l->first = l->last = p;
        p->next = NULL;
    }
    else
    {
        l->last->next = p;
        l->last = p;
        p->next = NULL;
    }
}
void create_Linkedlist(Linkedlist *plist)
{
    int k;
    do
    {
        scanf("%d", &k);
        Node *p = create_new_node(&k);
        add_tail(plist, p);
    }
    while (k!=0);
}
void search(Linkedlist *plist, int key)
{
    Node *tmp=plist->first;
    int flag = 0;
    while (tmp!=NULL)
    {
        if (tmp->data==key)
        {
            flag = 1;

            tmp=tmp->next;
        }
        else
        {
            tmp=tmp->next;
        }
    }
    if(flag == 0)
    {
        printf("Khong\n");

    }
    else
    {
        printf("Co\n");

    }
}

int main()
{

    int n,i;
    scanf("%d\n", &n);
    int k,x;
    Linkedlist *plist=(Linkedlist*)malloc(sizeof(Linkedlist));
    init_list(plist);
    while(n--)
    {
        init_list(plist);
        create_Linkedlist(plist);
        scanf("%d", &x);
        search(plist,x);
    }
    return 0;
}
