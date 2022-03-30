#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char so_bao_danh[10];
    char ho_ten[50];
    int diem_toan;
    int diem_ly;
    int diem_tieng_anh;
    int tong_diem;
} DIEM_THI;

typedef struct Node
{
    DIEM_THI data;
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

Node *create_new_node(DIEM_THI*dt, Node *p)
{
    p=(Node*)malloc(sizeof(Node));
    if (p==NULL) return NULL;
    p->data=*dt;
    p->next=NULL;
    return p;
}

void add_tail(Linkedlist *plist, Node *pnode)
{
    if (plist->first==NULL)
    {
        plist->first=pnode;
        plist->last=pnode;
    }
    else
    {
        plist->last->next=pnode;
        plist->last=pnode;
    }
}

void read(DIEM_THI *dt)
{
    printf("SBD: ");
    fflush(stdin);
    gets(dt->so_bao_danh);
    printf("Ho ten: ");
    fflush(stdin);
    gets(dt->ho_ten);
    printf("Toan: ");
    scanf("%d", &dt->diem_toan);
    printf("Ly: ");
    scanf("%d", &dt->diem_ly);
    printf("Anh: ");
    scanf("%d", &dt->diem_tieng_anh);
    dt->tong_diem=dt->diem_ly+dt->diem_tieng_anh+dt->diem_toan;
}

void load_list(Linkedlist *plist, DIEM_THI *dt)
{
    int n,i;
    printf("Nhap so luong thi sinh: ");
    scanf("%d", &n);
    printf("\n");
    Node *p;
    init_list(p);
    for (i=0; i<n; i++)
    {
        printf("Thi sinh thu %d\n",i+1);
        read(dt);
        printf("\n");
        p=create_new_node(dt,p);
        add_tail(plist,p);
    }
}

void print_node(DIEM_THI dt, int i)
{
    printf("\n%10d%10s%20s%20d%10d%10d%10d\n",i,dt.so_bao_danh,dt.ho_ten,dt.diem_toan,dt.diem_ly,dt.diem_tieng_anh,dt.tong_diem);
}

void print_list(Linkedlist *plist)
{
    printf("\t\t\t\t\tDANH SACH DIEM THI THPT\n");
    char stt[10]="STT";
    char sbd[5]="SBD";
    char ho_ten[15]="Ho ten";
    char diem_toan[15]="Diem Toan";
    char diem_ly[15]="Diem Ly";
    char diem_ta[15]="Diem TA";
    char tong[15]="Tong";
    printf("\n%10s%10s%20s%20s%10s%10s%10s\n",stt,sbd,ho_ten,diem_toan,diem_ly,diem_ta,tong);
    Node *tmp=plist->first;

        int i=0;
        for (i=1; tmp!=NULL; tmp=tmp->next)
        {
            print_node(tmp->data,i);
            i++;
        }
}

void move(DIEM_THI *dt1,DIEM_THI *dt2)
{
    DIEM_THI tmp=*dt1;
    *dt1=*dt2;
    *dt2=tmp;
}

void arrange_up_Toan(Linkedlist plist)
{
    Node *p,*k;
    for (p=plist.first; p!=NULL; p=p->next)
    {
        for (k=p->next; k!=NULL; k=k->next)
        {
            if (p->data.diem_toan>k->data.diem_toan)
            {
                move(&p->data,&k->data);
            }
        }
    }
}

void arrange_up_Ly(Linkedlist plist)
{
    Node *p,*k;
    for (p=plist.first; p!=NULL; p=p->next)
    {
        for (k=p->next; k!=NULL; k=k->next)
        {
            if (p->data.diem_ly>k->data.diem_ly)
            {
                move(&p->data,&k->data);
            }
        }
    }
}

void arrange_up_Anh(Linkedlist plist)
{
    Node *p,*k;
    for (p=plist.first; p!=NULL; p=p->next)
    {
        for (k=p->next; k!=NULL; k=k->next)
        {
            if (p->data.diem_tieng_anh>k->data.diem_tieng_anh)
            {
                move(&p->data,&k->data);
            }
        }
    }
}

void arrange_up_Tong(Linkedlist plist)
{
    Node *p,*k;
    for (p=plist.first; p!=NULL; p=p->next)
    {
        for (k=p->next; k!=NULL; k=k->next)
        {
            if (p->data.tong_diem>k->data.tong_diem)
            {
                move(&p->data,&k->data);
            }
        }
    }
}

void arrange_down_Toan(Linkedlist plist)
{
    Node *p,*k;
    for (p=plist.first; p!=NULL; p=p->next)
    {
        for (k=p->next; k!=NULL; k=k->next)
        {
            if (p->data.diem_toan<k->data.diem_toan)
            {
                move(&p->data,&k->data);
            }
        }
    }
}

void arrange_down_Ly(Linkedlist plist)
{
    Node *p,*k;
    for (p=plist.first; p!=NULL; p=p->next)
    {
        for (k=p->next; k!=NULL; k=k->next)
        {
            if (p->data.diem_ly<k->data.diem_ly)
            {
                move(&p->data,&k->data);
            }
        }
    }
}

void arrange_down_Anh(Linkedlist plist)
{
    Node *p,*k;
    for (p=plist.first; p!=NULL; p=p->next)
    {
        for (k=p->next; k!=NULL; k=k->next)
        {
            if (p->data.diem_tieng_anh<k->data.diem_tieng_anh)
            {
                move(&p->data,&k->data);
            }
        }
    }
}

void arrange_down_Tong(Linkedlist plist)
{
    Node *p,*k;
    for (p=plist.first; p!=NULL; p=p->next)
    {
        for (k=p->next; k!=NULL; k=k->next)
        {
            if (p->data.tong_diem<k->data.tong_diem)
            {
                move(&p->data,&k->data);
            }
        }
    }
}


void menu()
{
    printf("1.  Tao danh sach thi sinh\n");
    printf("2.  Hien thi danh sach thi sinh\n");
    printf("3.  Sap xep diem thi\n");
    printf("4.  Ket thuc\n");
    printf("Option: ");
}

int main()
{
    Linkedlist plist;
    init_list(&plist);
    DIEM_THI dt;
    int option,a;
    do
    {
        menu();
        scanf("%d", &option);
        switch(option)
        {
        case 1:
            load_list(&plist,&dt);
            break;
        case 2:
            print_list(&plist);
            break;
        case 3:
            printf("1) Sap xep tang dan theo diem toan\n");
            printf("2) Sap xep tang dan theo diem ly\n");
            printf("3) Sap xep tang dan theo diem tieng anh\n");
            printf("4) Sap xep tang dan theo tong diem\n");
            printf("5) Sap xep giam dan theo diem toan\n");
            printf("6) Sap xep giam dan theo diem ly\n");
            printf("7) Sap xep giam dan theo diem tieng anh\n");
            printf("8) Sap xep giam dan theo tong diem\n");
            printf("Choose: ");
            scanf ("%d", &a);
            switch(a)
            {
            case 1:
                arrange_up_Toan(plist);
                break;
            case 2:
                arrange_up_Ly(plist);
                break;
            case 3:
                arrange_up_Anh(plist);
                break;
            case 4:
                arrange_up_Tong(plist);
                break;
            case 5:
                arrange_down_Toan(plist);
                break;
            case 6:
                arrange_down_Ly(plist);
                break;
            case 7:
                arrange_down_Anh(plist);
                break;
            case 8:
                arrange_down_Tong(plist);
                break;
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Choose 1 to 4");
            break;
        }
    }
    while (option>=1 && option<=4);
    return 0;
}
