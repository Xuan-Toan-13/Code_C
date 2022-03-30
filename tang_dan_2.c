#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 50
int tt[50];
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
    int j;
    for (j=0; j<n; j++)
    {
        printf("%5d", x[j]);
    }
    printf("\n");
}

int sap_xep(int x[], int n)
{
    int i,j,doi;
    for(i=n-1; i>0; i--)
    {
        for (j=0; j<i; j++)
        {
            if (x[j]>x[j+1])
            {
                doi=x[j];
                x[j]=x[j+1];
                x[j+1]=doi;
                doi=tt[j];
                tt[j]=tt[j+1];
                tt[j+1]=doi;
            }
        }
    }
}
void sap_xep_tt(int x[], int n)
{
    int i, j, index_max,doi;
    for (i=0; i<n; i++)
    {
        index_max = i;
        for (j=i+1; j<n; j++)
        {
            if (tt[j]<tt[index_max] && x[j]==x[index_max])
            {
                index_max=j;
            }
        }
        if (index_max!=i)
        {
            doi=x[i];
            x[i]=x[j];
            x[j]=doi;
        }
    }
}
int main()
{
    //freopen ("D:\\input.txt","r", stdin);
    int n,dem;
    scanf("%d", &n);
    int mang[n];
    nhap_mang(mang,n);
    for(dem=0;dem<n;dem++)
    {
        tt[dem]=dem;
        printf("%5d",tt[dem]);
    }
    printf("\n");
    hien_thi(mang,n);
    sap_xep(mang,n);
    hien_thi(mang,n);
    sap_xep_tt(mang,n);
    hien_thi(tt,n);
    return 0;
}
