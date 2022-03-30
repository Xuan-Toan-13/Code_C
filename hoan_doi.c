#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void doi_gia_tri(int *x, int *y)
{
    int i;
    i=*x;
    *x=*y;
    *y=i;
}
void in (int *x, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("%5d", *(x+i));
    }
    printf("\n");
}
void nhap_mang(int *x, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
}
void sap_xep_tang(int *x,int n)
{
    int i, j;
    for (i=n-1; i>0; i--)
    {
        for (j=0; j<i; j++)
        {
            if (x[j]>x[j+1])
            {
                doi_gia_tri(&x[j],&x[j+1]);
            }
        }
    }
    in(x,n);
}
void sap_xep_giam(int *x, int n)
{
    int i, j;
    for (i=n-1; i>0; i--)
    {
        for (j=0; j<i; j++)
        {
            if (x[j]<x[j+1])
            {
                doi_gia_tri(&x[j],&x[j+1]);
            }
        }
    }
    in(x,n);
}

int main()
{
int n;
scanf("%d", &n);
int *x;
x=(int *)malloc(n*sizeof (int));
nhap_mang(x,n);
in(x,n);
sap_xep_tang(x,n);
sap_xep_giam(x,n);
free(x);
    return 0;
}
