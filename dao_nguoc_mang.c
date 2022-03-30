#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 505
void doc_mang(int x[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf ("%d", &x[i]);
    }
}
void in_mang_xuoi(int x[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("%5d", x[i]);
    }
    printf("\n");
}
void in_mang_nguoc(int x[], int n)
{
    int i;
    for (i=n-1; i>=0; i--)
    {
        printf ("%5d", x[i]);
    }
}
int main()
{
    //freopen ("D:\\input.txt","r", stdin);
    int n,i;
    scanf ("%d", &n);
    int mang[n];
    doc_mang(mang,n);
    in_mang_xuoi(mang,n);
    in_mang_nguoc(mang,n);
    return 0;
}
