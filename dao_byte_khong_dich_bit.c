#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void doi_cho(char *pa, char *pb)
{
    char i;
    i=*pa;
    *pa=*pb;
    *pb=i;
}
void byte_32(unsigned int *x)
{
    char *a=x;
    int i;
    for (i=0; i<2; i++)
    {
        doi_cho(&a[i], &a[3-i]);
    }
}
void byte_64(unsigned long long *x)
{
    char *a=(char*) x;
    int i;
    for (i=0; i<4; i++)
    {
        doi_cho(&a[i], &a[7-i]);
    }
}
int main()
{
    freopen ("D:\\input.txt","r", stdin);
    unsigned int x;
    unsigned long long y;
    scanf("%u %llu", &x, &y);
    printf ("0x%08x ~ ", x);
    byte_32(&x);
    printf("0x%08x\n",x);
    printf ("0x%016llx ~ ", y);
    byte_64(&y);
    printf("0x%016llx",y);
    return 0;
}
