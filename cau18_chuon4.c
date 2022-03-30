#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100
#define YES 1
#define NO 0

void read_matrix(int a[][MAX], int n)
{
    printf("Nhap ma tran\n");
    int i,j;
    for (i=1; i<=n ; i++)
    {
        for (j=1; j<=n; j++)
        {
            printf("nhap A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void show_matrix(int a[][MAX],int n)
{
    printf("Hien thi ma tran\n");
    int i,j;
    for (i=1; i<=n ; i++)
    {
        for (j=1; j<=n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

int check_matrix(int a[][MAX], int n)
{
    int i,j;
    for (i=1; i<=n; i++)
    {
        if (a[i][i]!=1)
        {
            return NO;
        }
    }
    for (i=1; i<=n; i++)
    {
        for (j=i+1; j<=n; j++)
        {
            if (a[i][j]!=0 || a[j][i]!=0)
            {
                return NO;
            }
        }
    }
    return YES;
}

int prime_number_check(int value)
{
    int i;
    if (value<2)
    {
        return NO;
    }
    else if (value==2)
    {
        return YES;
    }
    else if (value%2==0)
    {
        return NO;
    }
    else
    {
        for (i=3; i<=sqrt(value); i+=2)
        {
            if (value%i==0)
            {
                return NO;
            }
        }
    }
    return YES;
}

void prime_matrix(int a[][MAX], int n)
{
    int count[MAX]= {0};
    int i,j;
    int row=0;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (prime_number_check(a[i][j])==YES)
            {
                count[i]++;
            }
        }
        printf("Hang thu %d co so nguyen to\n",i);
    }
    int count_max=count[1];
    for (i=1; i<=n; i++)
    {
        count_max=(count_max>count[i])?count_max:count[i];
    }
    for (i=1; i<=n; i++)
    {
        if (count_max==count[i])
        {
            printf("Hang %d co so nguyen to nhieu nhat: %d so\n",i,count_max);
        }
    }
}

void sum_row(int a[][MAX], int n)
{
    int row,j,sum=0;
    do
    {
        printf("Nhap vao hang can tinh tong: ");
        scanf("%d", &row);
    }
    while (row<1 || row>n);
    for (j=1; j<=n; j++)
    {
        sum+=a[row][j];
    }
    printf("Tong hang %d la %d\n",row,sum);
}

void sum_col(int a[][MAX], int n)
{
    int col,i,sum=0;
    do
    {
        printf("Nhap vao cot can tinh tong: ");
        scanf("%d", &col);
    }
    while (col<1 || col>n);
    for (i=1; i<=n; i++)
    {
        sum+=a[i][col];
    }
    printf("Tong cot %d la %d\n",col,sum);
}

void check_mark(int a[][MAX], int n)
{
    int i,j;
    int positive_number=0;
    int negative_number=0;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (a[i][j]>0)
            {
                positive_number++;
            }
            else
            {
                negative_number++;
            }
        }
    }
    printf("Tong so duong cua ma tran la %d\n",positive_number);
    printf("Tong so am cua ma tran la %d\n",negative_number);

}

int main()
{
    int n,a[MAX][MAX];
    printf("Nhap cap ma tran n = ");
    scanf("%d", &n);
    read_matrix(a,n);
    show_matrix(a,n);
    if (check_matrix(a,n)==YES)
    {
        printf("A la ma tran don vi\n");
    }
    if (check_matrix(a,n)==NO)
    {
        printf("A khong la ma tran don vi\n");
    }
    prime_matrix(a,n);
    sum_row(a,n);
    sum_col(a,n);
    check_mark(a,n);
    return 0;
}
