#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 105

typedef struct Node
{
    char ten_san_pham[MAX];
    int so_luong;
    int gia_ban;
    struct Node *next;
} Node;

typedef struct
{
    Node *first;
    Node *last;
} Linkedlist;

Node *node_lt;

void init_list(Linkedlist *plist)
{
    plist->first=NULL;
    plist->last=NULL;
}

Node *create_new_node(char name[], int so_luong, int gia)
{
    Node *p=(Node*)malloc(sizeof(Node));
    strcpy(p->ten_san_pham,name);
    p->so_luong=so_luong;
    p->gia_ban=gia;
    p->next=NULL;
    return p;
}

Node *input()
{
    char name[MAX];
    int so_luong;
    int gia;
    scanf("%s%d%d", &name, &so_luong, &gia);
    return create_new_node(name,so_luong,gia);
}

void add_first(Linkedlist *plist, Node *p)
{
    plist->first=p;
    plist->last=p;
}

void add_tail(Linkedlist *plist, Node *p)
{
    plist->last->next=p;
    plist->last=p;
}

Node* search(Linkedlist *plist, char ten_san_pham[])
{
    node_lt=NULL;
    Node *tmp=plist->first;
    while (tmp!=NULL && strcmp(tmp->ten_san_pham,ten_san_pham)!=0)
    {
        node_lt=tmp;
        tmp=tmp->next;
    }
    return tmp;
}

void delete_first(Linkedlist *plist)
{
    Node *tmp=plist->first;
    plist->first=tmp->next;
    if (plist->first==NULL)
    {
        plist->last=NULL;
    }
    else
    {
        free(tmp);
    }
}

void delete_node(Linkedlist *plist,char ten_san_pham[])
{
    Node *tmp=search(plist,ten_san_pham);
    if (tmp!=NULL)
    {
        if (tmp==plist->first)
        {
            delete_first(plist);
            return;
        }
        else if (tmp==plist->last)
        {
            node_lt->next=NULL;
            plist->last=node_lt;
        }
        else
        {
            node_lt->next=tmp->next;
        }
        free(tmp);
    }
}

void search_show(Linkedlist *plist, char Name[])
{
    Node *p=search(plist,Name);
    if (p!=NULL)
    {
        printf("%s%10d%10d\n", p->ten_san_pham,p->so_luong,p->gia_ban);
    }
    else
    {
        printf("Khong ton tai san pham: %s\n", Name);
    }
}

void search_fix(Linkedlist *plist, char name[], int y, int value)
{
    Node *p=search(plist,name);
    if(p!=NULL)
    {
        if (y==1)
        {
            p->so_luong=value;
        }
        else if (y==2)
        {
            p->gia_ban=value;
        }
    }
    else
    {
        printf("Khong the sua thong tin san pham: %s\n",name);
    }
}

void print_list(Linkedlist *plist)
{
    Node *tmp=plist->first;
    while (tmp!=NULL)
    {
        printf("%s%10d%10d\n", tmp->ten_san_pham, tmp->so_luong, tmp->gia_ban);
        tmp=tmp->next;
    }
}

int main()
{
    Linkedlist *plist=(Linkedlist*)malloc(sizeof(Linkedlist));
    init_list(plist);
    Node *node;
    int total_action;
    scanf("%d\n", &total_action);
    int action;
    while (total_action--)
    {
        scanf("%d", &action);
        switch(action)
        {
        case 1:
        {
            node=input();
            if(plist->first==NULL)
            {
                add_first(plist,node);
            }
            else
            {
                add_tail(plist,node);
            }
            break;
        }
        case 2:
        {
            char ten_san_pham[MAX];
            scanf("%s", &ten_san_pham);
            delete_node(plist,ten_san_pham);
            break;
        }
        case 3:
        {
            char name[MAX];
            scanf("%s", &name);
            search_show(plist,name);
            break;
        }
        case 4:
        {
            char name[MAX];
            int y,value;
            scanf("%s%d%d", &name,&y,&value);
            search_fix(plist,name,y,value);
            break;
        }
        case 5:
        {
            print_list(plist);
            break;
        }
        }
    }
    return 0;
}
