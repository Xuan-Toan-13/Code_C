#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 100
void doc_mang(double x[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%lf", &x[i]);
    }
}
void kiem_tra(double x[], int n)
{
    int i;
    double m,M;
    for (i=0; i<n; i++)
    {
        if(i==0)
        {
            m=x[0];
            M=x[0];
        }
        if (x[i]<m)
        {
            m=x[i];
        }
        if (x[i]>M)
        {
            M=x[i];
        }
    }
    printf("Min = %.3lf\n", m);
    printf("Max = %.3lf\n", M);
}

int main()
{
    //freopen ("D:\\input.txt","r", stdin);
    int n;
    scanf("%d", &n);
    double mang[n];
    doc_mang (mang, n);
    kiem_tra (mang,n);
    return 0;
}
