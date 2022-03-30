#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    int T,t,n,NegativeSum=0,PositiveSum=0;
    scanf ("%d",&T);
    for (t=1; t<=T; t++)
    {
        NegativeSum=0;
        PositiveSum=0;
        do
        {
            scanf("%d", &n);
            if (n>0)
            {
                PositiveSum+=n;
            }
            else
            {
                NegativeSum+=n;
            }
        }
        while (n!=0);
        printf("NegativeSum = %6d;     PositiveSum = %6d\n",NegativeSum,PositiveSum);
    }
    return 0;
}
