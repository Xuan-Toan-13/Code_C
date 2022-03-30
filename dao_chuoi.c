
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void doi_gia_tri(char *x, char *y)
{
    char i;
    i=*x;
    *x=*y;
    *y=i;
}
void dao_chuoi(char c[])
{
    int i=0, n=1;
    while (c[i]!=NULL)
    {
        n++;
        i++;
    }
    i=0;
    while (i<n/2)
    {
        doi_gia_tri(&c[i],&c[n-2-i]);
        i++;
    }
}
int main()
{
char chuoi[50];
scanf("%s",chuoi);
dao_chuoi(chuoi);
printf("%s",chuoi);
    return 0;
}
