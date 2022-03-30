#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

void radix_conversion(int dec, int base)
{
    int k[1000];
    int i=0;
    while (dec>0)
    {
        k[i]=dec%base;
        dec=dec/base;
        i++;
    }
    for(int j=i-1; j>=0; j--)
    {
        printf("%X",k[j]);
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
            printf("Hien thi he co so 2: ");
            radix_conversion(n,2);
            break;
        case 2:
            printf("Nhap he co so 10: ");
            scanf("%d", &n);
            printf("Hien thi he co so 8: ");
            radix_conversion(n,8);
            break;
        case 3:
            printf("Nhap he co so 10: ");
            scanf("%d", &n);
            printf("Hien thi he co so 16: ");
            radix_conversion(n,16);
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
    return 0;
}
