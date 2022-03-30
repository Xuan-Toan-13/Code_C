#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void left_32(unsigned int *x,  int n)
{
    *x=*x>>n|*x<<32-n;
}
void left_64(unsigned long long *y,  int n)
{
    *y=*y>>n|*y<<64-n;
}
int main()
{
    int n1,n2;
    unsigned int x1;
    unsigned long long x2;
    scanf ("%d%x", &n1,&x1);
    scanf ("%d%llx", &n2,&x2);
    left_32(&x1,n1);
    printf("%08x\n", x1);
    left_64(&x2,n2);
    printf("%016llx",x2);
    return 0;
}

