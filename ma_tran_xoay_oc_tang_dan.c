#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ROWS 35
#define COLS 35
void tao_ma_tran(int x[][COLS], int so_dong, int so_cot)
{
    int i,j;
    int gia_tri=1;
    int dong=so_dong-1;
    int cot=so_cot-1;
    int vong=0;
    while(gia_tri<=so_cot*so_dong)
    {
        //dong tren cung
        for (j=vong; j<=cot; j++)
        {
            if (gia_tri<=so_cot*so_dong)
            {
                x[vong][j]=gia_tri++;
            }
        }
        //cot ngoai cung
        for (i=vong+1; i<=dong; i++)
        {
            if (gia_tri<=so_cot*so_dong)
            {
                x[i][cot]=gia_tri++;
            }
        }
        //dong cuoi cung
        for (j=cot-1; j>=vong; j--)
        {
            if (gia_tri<=so_cot*so_dong)
            {
                x[dong][j]=gia_tri++;
            }
        }
        //cot trong cung
        for (i=dong-1; i>=vong+1; i--)
        {
            if (gia_tri<=so_cot*so_dong)
            {
                x[i][vong]=gia_tri++;
            }
        }
        vong++;
        dong--;
        cot--;
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
   // freopen ("D:\\input.txt","r", stdin);
    int m,n;
    scanf("%d%d", &m, &n);
    int a[ROWS][COLS];
    tao_ma_tran(a,m,n);
    in_ma_tran(a,m,n);
    return 0;
}
