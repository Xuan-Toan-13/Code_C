#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 55
void doc_mang(int x[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf ("%d", &x[i]);
    }
}
void in_mang(int x[], int n)
{
    int i,j;
    for (i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(x[i]<x[j])
            {
                printf("(%2d, %2d) = (%5d, %5d)\n",i,j,x[i],x[j]);
            }
        }
    }
}
int main()
{
   // freopen ("D:\\input.txt","r", stdin);
    int n,i;
    scanf("%d", &n);
        int mang[n];
    doc_mang(mang,n);
    for(i=0; i<n; i++)
    {
        printf("%5d", i);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%5d", mang[i]);
    }
    printf("\n");
    in_mang(mang,n);
    return 0;
}
