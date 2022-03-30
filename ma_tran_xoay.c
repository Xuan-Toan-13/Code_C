#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100

void cal_matrix(int a[][MAX], int n)
{
    int i,j,value=1,loop=0;
    int row=n-1,col=n-1;
    while (value<=n*n)
    {
        for (j=loop; j<=col; j++)
        {
            if (value<=n*n)
            {
                a[loop][j]=value++;
            }
        }
        for (i=loop+1; i<=row; i++)
        {
            if (value<=n*n)
            {
                a[i][col]=value++;
            }
        }
        for (j=col-1; j>=loop; j--)
        {
            if (value<=n*n)
            {
                a[row][j]=value++;
            }
        }
        for (i=row-1; i>=loop+1; i--)
        {
            if (value<=n*n)
            {
                a[i][loop]=value++;
            }
        }
        loop++;
        col--;
        row--;
    }
}

void print_matrix(int a[][MAX], int n)
{
    int i,j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

void menu()
{
    printf("\n__________________MENU__________________\n");
    printf("1. Nhap n\n");
    printf("2. Tinh ma tran xoay\n");
    printf("3. Hien thi ma tran xoay\n");
    printf("4. Ket thuc\n");
    printf("Option: ");
}

int main()
{
    int n, a[MAX][MAX];
    while(1)
    {
        menu();
        int check;
        scanf("%d", &check);
        switch(check)
        {
        case 1:
        {
            printf("Nhap ma tran cap n = ");
            scanf("%d", &n);
            break;
        }
        case 2:
            cal_matrix(a,n);
            break;
        case 3:
            print_matrix(a,n);
            break;
        case 4:
            printf("KET THUC\n");
            exit(0);
        default:
            printf("Chon tu 1 den 4\n");
        }
    }
    return 0;
}
