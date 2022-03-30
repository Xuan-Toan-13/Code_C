#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int n,i,f1=1,f2=1,f=0;
    do
    {
        printf("n = ");
        scanf("%d", &n);
    }
    while (n<=2);
    for (i=3; i<=n; i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
    }
    printf("f(n)=%d",f);
    return 0;
}
