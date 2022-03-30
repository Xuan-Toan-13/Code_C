#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    double n,sum=0;
    while (n!=0)
    {
        scanf("%lf", &n);
        sum+=n;

    }
    printf("%.3lf", sum);
    return 0;
}
