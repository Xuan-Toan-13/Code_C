#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include<windows.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *top=NULL;

Node *create_new_node(int n)
{
    Node *p=(Node*)malloc(sizeof(Node));
    p->data=n;
    p->next=NULL;
    return p;
}

void push(int n)
{
    Node *p=create_new_node(n);
    if(top==NULL)
    {
        top=p;
    }
    else
    {
        p->next=top;
        top=p;
    }
}

int pop()
{
    if(top==NULL)
    {
        return -1;
    }
    else
    {
        int n=top->data;
        Node *k=top;
        top=top->next;
        free(k);
        return n;
    }
}

void radix_conversion(int dec, int base)
{
    while (dec>0)
    {
        push(dec%base);
        dec/=base;
    }
}

void show_stack()
{
    while(top!=NULL)
    {
        printf("%X",pop());
    }
    printf("\n");
}

void menu()
{
    printf("____________________MENU____________________\n");
    printf("1. Chuyen mot so nguyen duong sang he 2\n");
    printf("2. Chuyen mot so nguyen duong sang he 8\n");
    printf("3. Chuyen mot so nguyen duong sang he 16\n");
    printf("4. Ket thuc\n");
    printf("Option: ");
}

int main()
{
    int c,n;
    do
    {
        menu();
        scanf("%d", &c);
        switch(c)
        {
        case 1:
            printf("Nhap he co so 10: ");
            scanf("%d", &n);
            radix_conversion(n,2);
            printf("Hien thi he co so 2: ");
            show_stack();
            break;
        case 2:
            printf("Nhap he co so 10: ");
            scanf("%d", &n);
            radix_conversion(n,8);
            printf("Hien thi he co so 8: ");
            show_stack();
            break;
        case 3:
            printf("Nhap he co so 10: ");
            scanf("%d", &n);
            radix_conversion(n,16);
            printf("Hien thi he co so 16: ");
            show_stack();
            break;
        case 4:
            printf("Ket thuc chuong trinh\n");
            exit(0);
            break;
        default:
            printf("Choose 1 to 4\n");
            break;
        }
    }
    while (c<=4 && c>=1);
    getch();
    system("cls");
    return 0;
}
