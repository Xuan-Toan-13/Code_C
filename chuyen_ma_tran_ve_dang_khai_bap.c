#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ROWS 55
#define COLS 55
void nhap_ma_tran(int x[][COLS], int dong, int cot)
{
    int i,j;
    for (i=0; i<dong; i++)
    {
        for (j=0; j<cot; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
}
void in_mang(int x[][COLS], int dong, int cot)
{
    int i,j;
    printf("int a[%d][%d] = {\n\t", dong,cot);
    for (i=0; i<dong; i++)
    {
        printf("{");
        for (j=0; j<cot; j++)
        {
            printf("%3d",x[i][j]);
            if (j!=cot-1)
            {
                printf(", ",x[i][j]);
            }
            else
            {
                printf("}");
            }
        }
        if (i!=dong-1)
        {
            printf("\n\t");
        }
        else
        {
            printf("\n");
        }
    }
    printf("};");
}
int main()
{
    freopen ("D:\\input.txt","r", stdin);
    int m,n;
    scanf ("%d %d", &m, &n);
    int b[ROWS][COLS];
    nhap_ma_tran(b,m,n);
    in_mang(b,m,n);
    return 0;
}
