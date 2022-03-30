#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char maSV[10];
    char ho_ten[40];
    int nam_sinh;
} sinh_vien;

typedef struct Node
{
    sinh_vien data;
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

Node* tao_node_moi(char maSV[], char ho_ten[], int nam_sinh)
{
    Node *node = (Node*) malloc (sizeof(Node));
    strcpy(node->data.maSV,maSV);
    strcpy(node->data.ho_ten,ho_ten);
    node->data.nam_sinh=nam_sinh;
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

void them_pt_vao_giua_dslk(DSLK *plist, Node *pNode, char key[])
{
    Node *tmp = plist->dau;
    while(strcmp(tmp->data.maSV,key)!=0&& tmp!=NULL)
    {
        tmp=tmp->next;
    }
    if (tmp!= NULL && strcmp(tmp->data.maSV,key)==0)
    {
        pNode->next=tmp->next;
        tmp->next=pNode;
    }
    else
    {
        printf("Khong tim thay phan tu %s\n", key);
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

Node* tim_kiem(DSLK *plist, char key[])
{
    node_lt=NULL;
    Node *tmp=plist->dau;
    while(tmp!=NULL)
    {
        if (strcmp(tmp->data.maSV,key)==0)
        {
            return tmp;
        }
        node_lt=tmp;
        tmp=tmp->next;
    }
    return NULL;
}

void xoa_pt_khoi_dslk(DSLK *plist, char key[])
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
        printf("khong the xoa phan tu %s\n", key);
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

void sua_thong_tin_mot_pt(DSLK *plist, char key[], char ho_ten[])
{
    Node *tmp=tim_kiem(plist,key);
    if (tmp!=NULL)
    {
        strcpy(tmp->data.ho_ten,ho_ten);
    }
    else
    {
        printf("khong the sua thong tin sv %10s\n", key);
    }
}

void duyet_dslk(DSLK *plist)
{
    Node *tmp=plist->dau;
    while(tmp!=plist->cuoi->next)
    {
        printf("%10s %30s %d \n", tmp->data.maSV, tmp->data.ho_ten,tmp->data.nam_sinh);
        tmp=tmp->next;
    }
    printf("\n");
}

int main()
{
    DSLK *plist =(DSLK*) malloc (sizeof(DSLK));
    khoi_tao_dslk(plist);
    them_pt_vao_dau_dslk(plist,tao_node_moi("AT180645", "Nguyen Xuan Toan",2003));
    them_pt_vao_dau_dslk(plist,tao_node_moi("AT180644", "Nguyen Xuan Thang",2007));
    printf("DANH SACH SINH VIEN\n");
    duyet_dslk(plist);

    xoa_pt_khoi_dslk(plist,"AT180644");
    printf("Xoa sinh vien khoi danh sach\n");
    duyet_dslk(plist);

    them_pt_vao_dau_dslk(plist,tao_node_moi("AT180378","Nguyen Xuan Loi", 2003));
    printf("them phan tu vao DSLK\n");
    duyet_dslk(plist);

    sua_thong_tin_mot_pt(plist,"AT180645", "Nguyen Xuan Toann");
    printf("sua thong tin sinh vien\n");
    duyet_dslk(plist);
    return 0;
}

