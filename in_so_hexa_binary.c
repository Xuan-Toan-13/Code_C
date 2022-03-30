#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    int t,i,j,k;
    unsigned int n;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%u", &n);
        printf("%9u = 0x%08x = ", n, n);
        for(j=1; j<=32; j++)
        {
            k=n>>(32-j);
            if (k&1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            if (j%4==0 && j!=32)
            {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
