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
    Node *dau;
    Node *cuoi;
} DSLK;

Node *node_lt;

void khoi_tao_dslk(DSLK *plist)
{
    plist->dau=NULL;
    plist->cuoi=NULL;
}

Node* tao_node_moi(int value)
{
    Node *node = (Node*) malloc (sizeof(Node));
    node->data=value;
    node->next=NULL;
    return node;
}

void them_pt_vao_cuoi_dslk(DSLK *plist, Node *pNode)
{
    if (plist->dau==NULL)
    {
        plist->dau=pNode;
        plist->cuoi=pNode;
    }
    else
    {
        plist->cuoi->next=pNode;
        plist->cuoi=pNode;
    }
}

void duyet_dslk(DSLK *plist)
{
    Node *tmp= plist->dau;
    while (tmp!=plist->cuoi->next)
    {
        printf("%d ", tmp->data);
        tmp=tmp->next;
    }

}
int main()
{
    DSLK *plist=(DSLK*)malloc(sizeof(DSLK));
    khoi_tao_dslk(plist);
    int x;
    do
    {
        scanf("%d", &x);
        them_pt_vao_cuoi_dslk(plist,tao_node_moi(x));
    }
    while (x!=0);
    duyet_dslk(plist);
    return 0;
}
