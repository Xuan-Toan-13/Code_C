#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void dec(int*x)
{
    *x=*x-1;
}
void inc(int *x)
{
    *x=*x+2;
}
int main()
{
    int x;
    scanf("%d", &x);
    dec(&x);
    printf("%d\n", x);
    inc(&x);
    printf("%d\n", x);
    return 0;
}
