#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 505
void doc_mang(double x[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf ("%lf", &x[i]);
    }
}
void in_mang(double x[], int n)
{
    int i;
    double t,tb;
    for (i=0; i<n; i++)
    {
        printf("%.2lf ", x[i]);
        t+=x[i];
    }
    printf ("\n");
    tb=t/n;
    printf("Avg = %.3lf\n", tb);
    for (i=0; i<n; i++)
    {
        if(x[i]>tb)
        {
            printf ("%.2lf ", x[i]);
        }
    }
}
int main()
{
    //freopen ("D:\\input.txt","r", stdin);
    int n;
    scanf("%d", &n);
    double a[n];
    doc_mang(a,n);
    in_mang(a,n);
    return 0;
}
