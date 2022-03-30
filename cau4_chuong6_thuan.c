#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char ten_hang[20];
    int don_gia;
    int so_luong;
    int thanh_tien;
} SO_LIEU;

typedef struct Node
{
    SO_LIEU data;
    struct Node *next;
} Node;

typedef struct
{
    Node *first;
    Node *last;
} List;

void init_list(List *plist)
{
    plist->first=plist->last=NULL;
}

Node *create_new_node(SO_LIEU *sl, Node *p)
{
    p=(Node*)malloc(sizeof(Node));
    if(p==NULL) return NULL;
    p->data=*sl;
    p->next=NULL;
    return p;
}

void read(SO_LIEU *sl)
{
    printf("Ten Hang: ");
    fflush(stdin);
    gets(sl->ten_hang);
    printf("Don Gia: ");
    scanf("%d", &sl->don_gia);
    printf("So Luong: ");
    scanf("%d", &sl->so_luong);
}

void add_tail(List *plist, Node *p)
{
    if (plist->first==NULL)
    {
        plist->first=p;
        plist->last=p;
    }
    else
    {
        plist->last->next=p;
        plist->last=p;
    }
}

void load_list(List *plist, SO_LIEU *sl)
{
    int n,i;
    printf("Nhap so loai mat hang: ");
    scanf("%d", &n);
    Node *p;
    init_list(plist);
    for(i=0; i<n; i++)
    {
        printf("NHAP LOAI HANG THU %d\n",i+1);
        read(sl);
        sl->thanh_tien=sl->don_gia*sl->so_luong;
        printf("\n");
        p=create_new_node(sl,p);
        add_tail(plist,p);
    }
}

void print_node(SO_LIEU sl,int i)
{
    printf("\n%10d%20s%20d%20d%20d\n",i,sl.ten_hang,sl.don_gia,sl.so_luong,sl.thanh_tien);
}

void print_list(List *plist)
{
    printf("\t\t\t\t\tSO LIEU BAN HANG\n");
    printf("\n%10s%20s%20s%20s%20s\n","STT","Ten Hang","Don gia","So luong","Thanh tien");
    Node* tmp=plist->first;
    int i;
    for(i=1; tmp!=NULL; tmp=tmp->next)
    {
        print_node(tmp->data,i);
        i++;
    }
}

int main()
{
    List plist;
    SO_LIEU sl;
    init_list(&plist);
    load_list(&plist,&sl);
    print_list(&plist);

    return 0;
}
