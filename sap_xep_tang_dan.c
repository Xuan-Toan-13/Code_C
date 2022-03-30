#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 1005
void nhap_mang(int x[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
}
void doi_cho(int x[], int i, int j)
{
    int doi;
    doi=x[i];
    x[i]=x[j];
    x[j]=doi;
}
void sap_xep(int x[], int n)
{
    int i,j;
    for (i=n-1; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(x[j]>x[j+1])
            {
                doi_cho(x,j,j+1);
            }
        }
    }
}
void in_mang(int x[], int n){
int i;
for (i=0; i<n; i++){
    printf ("%5d", x[i]);
}
printf("\n");
}
int main()
{
    freopen ("D:\\input.txt","r", stdin);
    int n;
    scanf("%d", &n);
    int mang[n];
    nhap_mang(mang, n);
    in_mang(mang,n);
    sap_xep(mang,n);
    in_mang(mang,n);
    return 0;
}
