#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    // freopen("D:\\input.txt", "r", stdin);
    int a,b,i,u;
    scanf("%d%d", &a, &b);
    for (i=1; i<=a || i<=b; i++)
    {
        if (a%i==0 && b%i==0)
        {
            u=i;
        }
    }
        printf ("%d", u);



    return 0;
}
