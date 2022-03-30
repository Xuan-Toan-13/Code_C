#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ROWS 55
#define COLS 55
void nhap_ma_tran(int x[], int m, int n)
{
    int i,j,k=0;
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d", &x[k]);
            k++;
        }
    }
}
void noi_bot(int x[], int n)
{
    int i,j,doi;
    for (i=n-1; i>0; i--)
    {
        for (j=0; j<i; j++)
        {
            if (x[j]<x[j+1])
            {
                doi=x[j];
                x[j]=x[j+1];
                x[j+1]=doi;
            }
        }
    }
}
void tao_ma_tran(int x[], int m, int n, int y[][COLS])
{
    int i,j;
    int k=0;
    while (k<m*n)
    {
        for (i=0; i<m; i++)
        {
            if (i%2==0)
            {
                for (j=n-1; j>=0; j--)
                {
                    y[i][j]=x[k++];
                }
            }
            else
            {
                for (j=0; j<n; j++)
                {
                    y[i][j]=x[k++];
                }
            }
        }
    }
}
void in_ma_tran(int x[][COLS], int dong, int cot)
{
    int i,j;
    for (i=0; i<dong; i++)
    {
        for (j=0; j<cot; j++)
        {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }
}
int main()
{
     freopen ("D:\\input.txt","r", stdin);
    int m,n;
    scanf("%d%d", &m, &n);
    int a[ROWS*COLS];
    nhap_ma_tran(a,m,n);
    noi_bot(a,m*n);
    int b[ROWS][COLS];
    tao_ma_tran(a,m,n,b);
    in_ma_tran(b,m,n);
    return 0;

}

