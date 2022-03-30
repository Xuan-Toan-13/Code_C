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

void them_pt_vao_dau_dslk(DSLK *plist, Node *pNode)
{
    if (plist->dau==NULL)
    {
        plist->dau=pNode;
        plist->cuoi=pNode;
    }
    else
    {
        pNode->next=plist->dau;
        plist->dau=pNode;
    }
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

void them_pt_vao_giua_dslk(DSLK *plist, Node *pNode, int key)
{
    Node *tmp = plist->dau;
    while(tmp->data!=key && tmp!=NULL)
    {
        tmp=tmp->next;
    }
    if (tmp!= NULL && tmp->data==key)
    {
        pNode->next=tmp->next;
        tmp->next=pNode;
    }
    else
    {
        printf("Khong tim thay phan tu %d\n", key);
        //them_pt_vao_cuoi_dslk(plist,pNode);
    }
}

void xoa_phan_tu_dau_dslk(DSLK *plist)
{
    Node *tmp=plist->dau;
    plist->dau=tmp->next;
    if(plist->dau==NULL)
    {
        plist->cuoi=NULL;
    }
    free(tmp);
}

Node* tim_kiem(DSLK *plist, int key)
{
    node_lt=NULL;
    Node *tmp=plist->dau;
    while(tmp!=NULL)
    {
        if (tmp->data==key)
        {
            return tmp;
        }
        node_lt=tmp;
        tmp=tmp->next;
    }
    return NULL;
}

void xoa_pt_khoi_dslk(DSLK *plist, int key)
{
    Node *tmp=tim_kiem(plist,key);
    if (tmp!=NULL)
    {
        if (tmp==plist->dau)
        {
            xoa_phan_tu_dau_dslk(plist);
            return;
        }
        else if (tmp==plist->cuoi)
        {
            node_lt->next=NULL;
            plist->cuoi=node_lt;
        }
        else
        {
            node_lt->next=tmp->next;
        }
        free(tmp);
    }
    else
    {
        printf("khong the xoa phan tu %d\n", key);
    }
}

void xoa_toan_bo_dslk(DSLK *plist)
{
    Node *tmp;
    while (plist->dau!=NULL)
    {
        tmp=plist->dau;
        plist->dau=tmp->next;
        free(tmp);
    }
    plist->cuoi=NULL;
}

void duyet_dslk(DSLK *plist)
{
    Node *tmp=plist->dau;
    while(tmp!=plist->cuoi->next)
    {
        printf("%d ", tmp->data);
        tmp=tmp->next;
    }
    printf("\n");
}

int main()
{
    DSLK *plist =(DSLK*) malloc (sizeof(DSLK));
    khoi_tao_dslk(plist);
    them_pt_vao_dau_dslk(plist,tao_node_moi(3));
    them_pt_vao_dau_dslk(plist,tao_node_moi(4));
    them_pt_vao_dau_dslk(plist,tao_node_moi(5));
    them_pt_vao_dau_dslk(plist,tao_node_moi(6));
    printf("them phan tu dau\n");
    duyet_dslk(plist);

    them_pt_vao_cuoi_dslk(plist,tao_node_moi(2));
    them_pt_vao_cuoi_dslk(plist,tao_node_moi(1));
    printf("them phan tu cuoi\n");
    duyet_dslk(plist);

    them_pt_vao_giua_dslk(plist,tao_node_moi(0),4);
    printf("them vao giua\n");
    duyet_dslk(plist);

    Node *tmp = tim_kiem(plist,3);
    if(tmp!=NULL)
    {
        printf("%d ton tai trong danh sach\n", 3);
    }
    else
    {
        printf("%d khong ton tai trong danh sach\n", 3);
    }

    xoa_phan_tu_dau_dslk(plist);
    printf("xoa phan tu dau\n");
    duyet_dslk(plist);

    xoa_pt_khoi_dslk(plist,1);
    printf("xoa phan tu bat ki\n");
    duyet_dslk(plist);
    xoa_pt_khoi_dslk(plist,10);

    xoa_toan_bo_dslk(plist);
    printf("xoa toan bo danh sach lien ket\n");
    duyet_dslk(plist);
    return 0;
}
