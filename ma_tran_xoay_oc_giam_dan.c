#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ROWS 100
#define COLS 100
void nhap_ma_tran(int x[], int so_dong, int so_cot)
{
    int i,j, index=0;
    for (i=0; i<so_dong; i++)
    {
        for (j=0; j<so_cot; j++)
        {
            scanf("%d", &x[index]);
            index++;
        }
    }
}
void noi_bot(int x[], int n)
{
    int i,j;
    int doi;
    for (i=n-1; i>0; i--)
    {
        for (j=0; j<i; j++)
        {
            if (x[j]>x[j+1])
            {
                doi=x[j];
                x[j]=x[j+1];
                x[j+1]=doi;
            }
        }
    }
}
void tao_ma_tran(int x[], int so_dong, int so_cot, int b[][COLS])
{
    int index=0;
    int i,j;
    int dong=so_dong-1;
    int cot=so_cot-1;
    int vong=0;
    while (index<so_cot*so_dong)
    {
        //ngoai cung ben phao
        for (i=dong; i>=vong; i--)
        {
            if (index<so_dong*so_cot)
            {
                b[i][cot]=x[index++];
            }
        }

        //tren cung
        for (j=cot-1; j>=vong; j--)
        {
            if (index<so_dong*so_cot)
            {
                b[vong][j]=x[index++];
            }
        }
        //ngoai cung ben trai
        for (i=vong+1; i<=dong; i++)
        {
            if (index<so_dong*so_cot)
            {
                b[i][vong]=x[index++];
            }
        }
        //duoi cung
        for (j=vong+1; j<=cot-1; j++)
        {
            if (index<so_dong*so_cot)
            {
                b[dong][j]=x[index++];
            }
        }
        vong++;
        cot--;
        dong--;
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

