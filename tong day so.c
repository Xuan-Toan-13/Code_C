#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    unsigned int n, i=1;
    double s=0,t=1;
    scanf("%u",&n);
    for (i; i<=n; i++)
    {
        t*=i;
        s+=1.0/t;
    }
    printf("%.10lf",s);
    return 0;
}
