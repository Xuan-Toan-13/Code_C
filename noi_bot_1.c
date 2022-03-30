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
void noi_bot(int x[], int n)
{
    int dong=1;
    int i,j;
    for(i=n-1; i>0; i--)
    {
        for (j=0; j<i; j++)
        {
            if (x[j]>x[j+1])
            {
                doi_cho(x,j,j+1);
                printf("%4d: ",dong);
                hien_thi(x,n);
                dong++;
                printf("\n");
            }
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
noi_bot(mang,n);
    return 0;
}
