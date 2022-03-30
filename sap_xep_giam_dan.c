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
int nhap_mang(int a[], int *n)
{
    int i=-1;
    do {
        i++;
        scanf("%d", &a[i]);
    } while (a[i]!=0);
    *n=i+1;
}
void sap_xep_giam_dan(int x[], int n)
{
    int i,j;
    for (i=n-1; i>0; i--)
    {
        for (j=0; j<i; j++)
        {
            if (x[j]<x[j+1])
            {
                doi_cho(x,j,j+1);
            }
        }
    }
}
void in_mang(int x[], int n)
{
    int i;
    for (i=0; i<n; i++){
        printf("%5d", x[i]);
    }
}
int main()
{
    freopen ("D:\\input.txt","r", stdin);
    int t,n;
    scanf ("%d", &t);
    int i=0;
    while (i<t){
        int mang[max_size];
        nhap_mang(mang,&n);
            printf("Testcase %02d: n = %d\n",i,n);
            printf("Orig:");
            in_mang(mang,n);
            sap_xep_giam_dan(mang,n);
            printf("\nSort:");
            in_mang(mang,n);
            printf("\n");
            i++;
            printf("\n");
    }
    return 0;
}
