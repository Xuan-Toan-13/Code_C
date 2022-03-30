#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ROWS 55
#define COLS 55
void tao_ma_tran(int x[][COLS], int m, int n)
{
    int i,j,gt=1;
    while (gt<=m*n)
    {
        for (j=0; j<n; j++)
        {
            if (j%2==0)
            {
                for (i=0; i<m; i++)
                {
                    x[i][j]+=gt++;
                }
            }
            else
            {
                for (i=m-1; i>=0; i--)
                {
                    x[i][j]+=gt++;
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
int a[ROWS][COLS];
tao_ma_tran(a,m,n);
in_ma_tran(a,m,n);
    return 0;
}
