#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 100
void doc_mang(int x[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
}
void tinh_tong(int x[], int n)
{
    int i,t=0;
    for (i=0; i<n; i++)
    {
        t+=x[i];
    }
    printf("%d", t);
}
int main()
{
   // freopen ("D:\\input.txt","r", stdin);
    int n;
    scanf("%d", &n);
    int mang[n];
    doc_mang(mang,n);
    tinh_tong(mang,n);
    return 0;
}
