#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char ho_ten[105];
    int nam_sinh;
} thong_tin;

typedef struct Node
{
    thong_tin data;
    struct Node *next;
} Node;

typedef struct
{
    Node *dau;
    Node *cuoi;
} DSLK;

void khoi_tao_dslk(DSLK *plist)
{
    plist->dau=NULL;
    plist->cuoi=NULL;
}

void duyet_dslk(DSLK *plist)
{
    Node *tmp=plist->dau;
    while (tmp!=NULL)
    {
        printf("%s (%d)\n", tmp->data.ho_ten, tmp->data.nam_sinh);
        tmp=tmp->next;
    }
}

void them_pt_vao_cuoi_dslk(DSLK *plist, Node *pnode)
{
    if (plist->dau==NULL)
    {
        plist->dau=pnode;
        plist->cuoi=pnode;
        pnode->next = NULL;
    }
    else
    {
        plist->cuoi->next=pnode;
        plist->cuoi=pnode;
        pnode->next = NULL;
    }
}

Node * tao_node_moi(char ho_ten[], int nam_sinh)
{
    Node *node=(Node*)malloc(sizeof(Node));
    strcpy(node->data.ho_ten,ho_ten);
    node->data.nam_sinh=nam_sinh;
    node->next=NULL;
    return node;
}

int main()
{
    int n,i;
    scanf("%d\n", &n);
    DSLK *plist=(DSLK*)malloc(sizeof(DSLK));
    khoi_tao_dslk(plist);
    thong_tin tt;
    for (i=0; i<n; i++)
    {
        gets(tt.ho_ten);
        scanf("%d\n", &tt.nam_sinh);
        them_pt_vao_cuoi_dslk(plist,tao_node_moi(tt.ho_ten,tt.nam_sinh));

    }
    duyet_dslk(plist);
    return 0;
}
