#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define COLS 100
#define ROWS 100

void read_matrix(int a[][COLS], int row, int col)
{
    int i,j;
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("Phan tu [%d][%d] = ",i+1,j+1);
            scanf ("%d", &a[i][j]);
        }
    }
}

void show_matrix(int a[][COLS], int row, int col)
{
    int i,j;
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

void matrix_product(int a[][COLS], int b[][COLS], int m, int n, int p)
{
    int c[ROWS][COLS];
    int i,j,k;
    for (i=0; i<m; i++)
    {
        for (j=0; j<p; j++)
        {
            c[i][j]=0;
            for (k=0; k<n; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    show_matrix(c,m,p);
}

int main()
{
    int a[ROWS][COLS],b[ROWS][COLS];
    int row_a,row_col,col_b;
    printf("Nhap so dong ma tran A: ");
    scanf("%d", &row_a);
    printf("Nhap so cot ma tran A: ");
    scanf("%d", &row_col);
    printf("NHAP MA TRAN A\n");
    read_matrix(a,row_a,row_col);
    printf("Nhap so dong ma tran B: ");
    scanf("%d", &row_col);
    printf("Nhap so cot ma tran B: ");
    scanf("%d", &col_b);
    printf("NHAP MA TRAN B\n");
    read_matrix(b,row_col,col_b);
    printf("Hien thi ma tran A\n");
    show_matrix(a,row_a,row_col);
    printf("Hien thi ma tran B\n");
    show_matrix(b,row_col,col_b);
    printf("TICH A*B\n");
    matrix_product(a,b,row_a,row_col,col_b);
    return 0;
}
