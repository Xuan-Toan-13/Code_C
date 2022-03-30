#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    freopen("D:\\input.txt", "r", stdin);
    int t,i,a,b,k,j;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%d%d", &a,&b);
        for (j=1; j<= a|| j<=b; j++)
        {
            if (a%j==0 && b%j==0)
            {
                k=j;
            }
        }
        printf("LCM(%5d, %5d) = %5d\n", a,b,(a*b)/k);
    }
    return 0;
}
