#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 1005
void doi_cho(int x[], int i, int j)
{
    int doi;
    doi=x[i];
    x[i]=x[j];
    x[j]=doi;
}
void nhap_mang(int x[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf ("%d", &x[i]);
    }
}
void hien_thi(int x[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("%4d", x[i]);
    }
}
void sap_xep_chen(int x[], int n)
{
    int i, j, dong=1;
    for (i=n-2; i>=0; i--)
    {
        j=i;
        while (j<n && x[j]>x[j+1] )
        {
            doi_cho(x, j, j+1);
            printf("%4d: ",dong);
            hien_thi(x,n);
            dong++;
            printf("\n");
            j++;
        }
    }
}
int main()
{
    freopen ("D:\\input.txt","r", stdin);
    int n;
    scanf("%d", &n);
    int mang[n];
    nhap_mang(mang,n);
    int i=0;
    printf("%4d: ", i);
    hien_thi(mang,n);
    printf("\n");
    sap_xep_chen(mang,n);
    return 0;
}


