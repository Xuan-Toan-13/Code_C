#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    freopen ("D:\\input.txt", "r", stdin);
    unsigned int n;
    scanf("%u", &n);
    double s=0,i=1,t=1;
    for (i; i<=2*n; i++)
    {
        t=t*1/i;
        s+=pow(-1,i-1)*t;
    }
    printf("%.13lf", s);
    return 0;

}
