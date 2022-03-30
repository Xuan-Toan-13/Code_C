#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
   // freopen("D:\\input.txt", "r", stdin);
    unsigned int T,t,n,k,i;
    scanf("%u", &T);
    for (t=1; t<=T; t++)
    {
        scanf("%u",&n);
        printf("%10u = ", n);
        for (i=1; i<=32; i++)
        {
            k=n>>(32-i);
            if (k&1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
