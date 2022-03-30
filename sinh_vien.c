#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char ho_ten[40];
    int tuoi;
    double diem_tb;
} SINH_VIEN;

typedef struct Node
{
    SINH_VIEN data;
    struct Node *next;
} Node;

typedef struct
{
    Node *first;
    Node *last;
} Linkedlist;

void init_list(Linkedlist *plist)
{
    plist->first=plist->last=NULL;
}

Node *create_new_node(SINH_VIEN *sv, Node *p)
{
    p=(Node*)malloc(sizeof(Node));
    if (p==NULL) return NULL;
    p->data=*sv;
    p->next=NULL;
    return p;
}

void read(SINH_VIEN *sv)
{
    printf("Ho ten: ");
    fflush(stdin);
    gets(sv->ho_ten);
    printf("Tuoi: ");
    scanf("%d", &sv->tuoi);
    printf("Diem trung binh: ");
    scanf("%lf", &sv->diem_tb);
}

void add_tail(Linkedlist *plist, Node *p)
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

void load_list(Linkedlist *plist, SINH_VIEN *sv)
{
    int n,i;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    Node *p;
    init_list(plist);
    for (i=0; i<n; i++)
    {
        printf("Sinh vien thu %d\n",i+1);
        read(sv);
        printf("\n");
        p=create_new_node(sv,p);
        add_tail(plist,p);
    }
}

void print_node(SINH_VIEN sv, int i)
{
    printf("\n%10d%20s%20d%10.1lf\n", i,sv.ho_ten,sv.tuoi,sv.diem_tb);
}

void print_list(Linkedlist *plist)
{
    printf("\t\t\tDANH SACH SINH VIEN\n");
    printf("\n%10s%20s%20s%10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
    Node *tmp=plist->first;
    int i;
    for (i=1; tmp!=NULL; tmp=tmp->next)
    {
        print_node(tmp->data,i);
        i++;
    }
}

void insert_mid(Linkedlist *plist, Node *pnode)
{
    char ho_ten[50];
    fflush(stdin);
    printf("Nhap ten sinh vien muon chen vao sau: ");
    gets(ho_ten);
    Node *tmp=plist->first;
    while (tmp!=NULL && strcmp(tmp->data.ho_ten, ho_ten)!=0)
    {
        tmp=tmp->next;
    }
    if (tmp!=NULL && strcmp(tmp->data.ho_ten,ho_ten)==0)
    {
        pnode->next=tmp->next;
        tmp->next=pnode;
    }
    else
    {
        printf("Khong tim thay sinh vien %s\n", ho_ten);
    }
}

Node *node_lt;

Node* search(Linkedlist *plist, char ho_ten[])
{
    node_lt=NULL;
    Node *tmp=plist->first;
    while (tmp!=NULL)
    {
        if (strcmp(tmp->data.ho_ten,ho_ten)==0)
        {
            return tmp;
        }
        node_lt=tmp;
        tmp=tmp->next;
    }
    return NULL;
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

void delete_node(Linkedlist *plist)
{
    char ho_ten[50];
    fflush(stdin);
    gets(ho_ten);
    Node *tmp=search(plist,ho_ten);
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
    else
    {
        printf("Khong the xoa sinh vien %s\n", ho_ten);
    }
}

void edit_node(Linkedlist *plist)
{
    char ho_ten[50];
    fflush(stdin);
    printf("Ho ten sinh vien can sua lai: ");
    gets(ho_ten);
    int tuoi;
    double diem_tb;
    printf("Nhap tuoi sua lai: ");
    scanf("%d", &tuoi);
    printf("Nhap diem trung binh sua lai: ");
    scanf("%lf", &diem_tb);
    Node *tmp=search(plist,ho_ten);
    if (tmp!=NULL)
    {
        tmp->data.tuoi=tuoi;
        tmp->data.diem_tb=diem_tb;
    }
    else
    {
        printf("Khong the sua sinh vien %s\n", ho_ten);
    }
}

void menu()
{
    printf("__________________MENU__________________\n");
    printf("1. Tao danh sach sinh vien\n");
    printf("2. Hien thi danh sach sinh vien\n");
    printf("3. Chen them sinh vien\n");
    printf("4. Xoa mot sinh vien\n");
    printf("5. Sua mot sinh vien\n");
    printf("6. Ket thuc\n");
    printf("Option: ");
}

int main()
{
    Linkedlist plist;
    init_list(&plist);
    SINH_VIEN sv,sv1;
    char ho_ten[50];
    Node *p;
    int option;
    do
    {
        menu();
        scanf("%d", &option);
        switch(option)
        {
        case 1:
            load_list(&plist,&sv);
            break;
        case 2:
            print_list(&plist);
            break;
        case 3:
            printf("Nhap thong tin sinh vien muon chen\n");
            read(&sv1);
            insert_mid(&plist,create_new_node(&sv1,&p));
            break;
        case 4:
            printf("Nhap ten sinh vien muon xoa: ");
            delete_node(&plist);
            break;
        case 5:
            edit_node(&plist);
            break;
        case 6:
            printf("Chuong trinh ket thuc\n");
            exit(0);
            break;
        default:
            printf("Choose 1 to 6\n");
            break;
        }
    }
    while (option>=1 && option<=6);
    return 0;
}
