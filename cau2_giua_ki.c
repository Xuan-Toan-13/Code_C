#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char ma[50];
    char ten[30];
    int nam_sinh;
} Danh_Sach;

typedef struct Node
{
    Danh_Sach data;
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

Node *create_new_node(Danh_Sach*ds, Node *p)
{
    p=(Node*)malloc(sizeof(Node));
    if (p==NULL) return NULL;
    p->data=*ds;
    p->next=NULL;
    return p;
}

void add_head(Linkedlist *plist, Node *pnode)
{
    if (plist->first==NULL)
    {
        plist->first=pnode;
        plist->last=pnode;
    }
    else
    {
        pnode->next=plist->first;
        plist->first=pnode;
    }
}

void read(Danh_Sach *ds)
{
    printf("Ma thu thu: ");
    fflush(stdin);
    gets(ds->ma);
    printf("Ten thu thu: ");
    fflush(stdin);
    gets(ds->ten);
    printf("Nam sinh: ");
    scanf("%d", &ds->nam_sinh);
}

void load_list(Linkedlist *plist, Danh_Sach *ds)
{
    int n,i;
    printf("Nhap so luong thu thu: ");
    scanf("%d", &n);
    printf("\n");
    Node *p;
    init_list(plist);
    for (i=0; i<n; i++)
    {
        printf("Thu thu thu %d\n",i+1);
        read(ds);
        printf("\n");
        p=create_new_node(ds,p);
        add_head(plist,p);
    }
    printf("\n");
}

void print_node(Danh_Sach ds, int i)
{
    printf("\n%10d%20s%20s%10d\n",i,ds.ma,ds.ten,ds.nam_sinh);
}

void print_list(Linkedlist *plist)
{
    printf("\t\t\t\t\tDANH SACH SACH\n");
    printf("\n%10s%20s%20s%10s\n","STT","Ma thu thu","Ten thu thu","nam sinh");
    Node *tmp=plist->first;
    int i=0;
    for (i=1; tmp!=NULL; tmp=tmp->next)
    {
        print_node(tmp->data,i);
        i++;
    }
}

Node *node_lt;

Node* search(Linkedlist *plist, char ma[])
{
    node_lt=NULL;
    Node *tmp=plist->first;
    while (tmp!=NULL)
    {
        if (strcmp(tmp->data.ma,ma)==0)
        {
            return tmp;
        }
        node_lt=tmp;
        tmp=tmp->next;
    }
    return NULL;
}

void insert_mid(Linkedlist *plist, Node *pnode)
{
    char ma[50];
    fflush(stdin);
    printf("Nhap ma thu thu muon chen vao truoc: ");
    gets(ma);
    Node *tmp=plist->first;
    while (tmp!=NULL && strcmp(tmp->data.ma, ma)!=0)
    {
        tmp=tmp->next;
    }
    if (tmp!=NULL && strcmp(tmp->data.ma,ma)==0)
    {
        pnode->next=tmp->next;
        tmp->next=pnode;
    }
    else
    {
        printf("Khong tim thay ma thu thu %s\n", ma);
    }
}

void swap(Danh_Sach *ds1,Danh_Sach *ds2)
{
    Danh_Sach tmp=*ds1;
    *ds1=*ds2;
    *ds2=tmp;
}

void sort_down(Linkedlist plist)
{
    Node *p,*k;
    for (p=plist.first; p!=NULL; p=p->next)
    {
        for (k=p->next; k!=NULL; k=k->next)
        {
            if (p->data.nam_sinh<k->data.nam_sinh)
            {
                swap(&p->data,&k->data);
            }
        }
    }
}

void menu()
{
    printf("__________________MENU__________________\n");
    printf("1. Tao danh sach thu thu\n");
    printf("2. Hien thi danh sach\n");
    printf("3. Chen them thu thu\n");
    printf("4. Sap xep danh sach tho chieu giam cua nam sinh\n");
    printf("5. Ket thuc\n");
    printf("Option: ");
}

int main()
{
    Linkedlist plist;
    init_list(&plist);
    Danh_Sach ds,ds1;
    char ma[50];
    Node *p;
    int option;
    do
    {
        menu();
        scanf("%d", &option);
        switch(option)
        {
        case 1:
            load_list(&plist,&ds);
            break;
        case 2:
            print_list(&plist);
            break;
        case 3:
            printf("Nhap thong tin thu thu muon chen\n");
            read(&ds1);
            insert_mid(&plist,create_new_node(&ds1,&p));
            break;
        case 4:
            sort_down(plist);
            break;
        case 5:
            printf("Chuong trinh ket thuc\n");
            exit(0);
            break;
        default:
            printf("Choose 1 to 5\n");
            break;
        }
    }
    while (option>=1 && option<=5);
    return 0;
}
