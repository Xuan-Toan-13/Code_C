#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char ho_ten[40];
    char gioi_tinh[10];
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
    printf("Gioi tinh: ");
    fflush(stdin);
    gets(sv->gioi_tinh);
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
        p->next=plist->last;
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
    printf("\n%10d%20s%20s%10.1lf\n", i,sv.ho_ten,sv.gioi_tinh,sv.diem_tb);
}

void print_list(Linkedlist *plist)
{
    printf("\t\t\tDANH SACH SINH VIEN\n");
    printf("\n%10s%20s%20s%10s\n", "STT", "Ho ten", "Gioi tinh", "Diem TB");
    Node *tmp=plist->last;
    int i;
    for (i=1; tmp!=NULL; tmp=tmp->next)
    {
        print_node(tmp->data,i);
        i++;
    }
}

Node *node_lt;

Node* search(Linkedlist *plist, char ho_ten[])
{
    node_lt=NULL;
    Node *tmp=plist->last;
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

void edit_node(Linkedlist *plist)
{
    char ho_ten[50];
    fflush(stdin);
    printf("Ho ten sinh vien can sua lai: ");
    gets(ho_ten);
    char gt[10];
    fflush(stdin);
    printf("Nhap gioi tinh sua lai: ");
    gets(gt);
    double diem_tb;
    printf("Nhap diem trung binh sua lai: ");
    scanf("%lf", &diem_tb);
    Node *tmp=search(plist,ho_ten);
    if (tmp!=NULL)
    {
        strcpy(tmp->data.gioi_tinh,gt);
        tmp->data.diem_tb=diem_tb;
    }
    else
    {
        printf("Khong the sua sinh vien %s\n", ho_ten);
    }
}

void swap(SINH_VIEN *sv1, SINH_VIEN *sv2)
{
    SINH_VIEN tmp=*sv1;
    *sv1=*sv2;
    *sv2=tmp;
}

void sort_up_diem(Linkedlist plist)
{
    Node *p,*k;
    for (p=plist.last; p!=NULL; p=p->next)
    {
        for (k=p->next; k!=NULL; k=k->next)
        {
            if (p->data.diem_tb>k->data.diem_tb)
            {
                swap(&p->data,&k->data);
            }
        }
    }
}

void show_diem_tb_7(Linkedlist *plist)
{
    printf("\t\t\tDANH SACH SINH VIEN CO DIEM LON HON 7.0\n");
    printf("\n%10s%20s%20s%10s\n", "STT", "Ho ten", "Gioi tinh", "Diem TB");
    Node *tmp=plist->last;
    int i;
    for (i=1; tmp!=NULL; tmp=tmp->next)
    {
        if(tmp->data.diem_tb>7.0)
        {
            print_node(tmp->data,i);
            i++;
        }
    }
}

void menu()
{
    printf("__________________MENU__________________\n");
    printf("1. Tao danh sach sinh vien\n");
    printf("2. Hien thi danh sach sinh vien\n");
    printf("3. Sua mot sinh vien\n");
    printf("4. Sap xep danh sach tang dan cua diem trung binh\n");
    printf("5. Hien thi ra cac sinh vien co diem trung binh lon hon 7.0\n");
    printf("6. Ket thuc\n");
    printf("Option: ");
}

int main()
{
    Linkedlist plist;
    init_list(&plist);
    SINH_VIEN sv;
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
            edit_node(&plist);
            break;
        case 4:
            printf("Diem trung binh tang dan\n");
            sort_up_diem(plist);
            break;
        case 5:
            show_diem_tb_7(&plist);
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

