#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ROWS 55
#define COLS 55
void tao_ma_tran(int x[][COLS], int dong, int cot)
{
    int i,j;
    int gt=1;
    while (gt<=dong*cot)
    {
        for (i=0; i<dong; i++)
        {
            if (i%2==0)
            {
                for (j=0; j<cot; j++)
                {
                    x[i][j]=gt++;
                }
            }
            else
            {
                for (j=cot-1; j>=0; j--)
                {
                    x[i][j]=gt++;
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
