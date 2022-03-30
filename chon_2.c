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
void sap_xep_chon(int x[], int n)
{
    int i, j, index_min,dong=1;
    for (i=n-1; i>0; i--)
    {
        index_min=i;
        for (j=i-1; j>=0; j--)
        {
            if(x[j]>x[index_min])
            {
                index_min=j;
            }
        }
        if (index_min !=i)
        {
            doi_cho(x,i,index_min);
            printf("%4d: ",dong);
            hien_thi(x,n);
            dong++;
            printf("\n");
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
        sap_xep_chon(mang,n);
        return 0;
    }
