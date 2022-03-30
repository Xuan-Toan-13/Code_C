#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100

typedef struct
{
    int row;
    int col;
} MATRIX;

void read_matrix(double a[][MAX], int row, int col)
{
    int i,j;
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
}

void print_matrix(double a[][MAX], int row, int col)
{
    int i,j;
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%6.1lf", a[i][j]);
        }
        printf("\n");
    }
}

void matrix_product(double a[][MAX], double b[][MAX], double c[][MAX], int n, int m, int p)
{
    int i,j,k;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            c[i][j]=0;
            for (k=0; k<p; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

void menu()
{
    printf("____________________MENU____________________\n");
    printf("1. Nhap 2 ma tran\n");
    printf("2. Tinh tich 2 ma tran\n");
    printf("3. Hien thi 3 ma tran\n");
    printf("4. Ket thuc\n");
    printf("Option: ");
}

int main()
{
    double a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
    MATRIX A, B, C;
    int choose;
    do
    {
        menu();
        scanf("%d", &choose);
        switch(choose)
        {
        case 1:
            printf("Nhap ma tran A\n");
            printf("ROW A: ");
            scanf("%d", &A.row);
            printf("COL A: ");
            scanf("%d", &A.col);
            read_matrix(a,A.row,A.col);
            printf("Nhap ma tran B\n");
            printf("ROW B: ");
            scanf("%d", &B.row);
            printf("COL B: ");
            scanf("%d", &B.col);
            read_matrix(b,B.row,B.col);
            break;
        case 2:
            if (A.col==B.row)
            {
                matrix_product(a,b,c,A.row,B.col,A.col);
            }
            else
            {
                printf("Ma tran khong hop le\n");
            }
            break;
        case 3:
            printf("Ma tran A\n");
            print_matrix(a,A.row,A.col);
            printf("\n");
            printf("Ma tran B\n");
            print_matrix(b,B.row,B.col);
            printf("\n");
            printf("Ma tran C\n");
            print_matrix(c,A.row,B.col);
            break;
        case 4:
            printf("KET THUC\n");
            exit(0);
        default:
            printf("Choose 1 to 4\n");
            break;
        }
    }
    while(choose>=1 && choose<=4);
    return 0;
}
