#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ROWS 100
#define COLS 100

void read_matrix(int a[][COLS], int row, int col)
{
    int i,j;
    printf("NHAP MA TRAN A\n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf ("Nhap A[%d][%d] = ",i+1,j+1);
            scanf ("%d", &a[i][j]);
        }
    }
}

void matrix_transposition(int a[][COLS],int b[][COLS], int row, int col)
{
    int i,j;
    for (i=0; i<col; i++)
    {
        for (j=0; j<row; j++)
        {
            b[i][j]=a[j][i];
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
            printf ("%4d", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[ROWS][COLS],b[ROWS][COLS];
    int row,col;
    printf("Nhap so dong cua ma tran A: ");
    scanf("%d", &row);
    printf("Nhap so cot cua ma tran A: ");
    scanf("%d", &col);
    read_matrix(a,row,col);
    printf("Hien thi ma tran A\n");
    show_matrix(a,row,col);
    printf("Hien thi ma tran chuyen vi cua A\n");
    matrix_transposition(a,b,row,col);
    show_matrix(b,col,row);
    return 0;
}
