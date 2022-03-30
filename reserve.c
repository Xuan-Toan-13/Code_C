#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 1005
void read(int x[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf ("%d", &x[i]);
    }
}
void in(int x[],int y [], int k, int p)
{
    int i,j;
    for(i=0; i<k; i++)
    {
        int kt=0;
        for(j=0; j<p; j++)
        {
            if(x[i]==y[j])
            {
                kt=1;
                break;
            }
        }
        if(kt!=1)
        {
            printf("%d ", x[i]);
        }
    }
}
int main()
{
   // freopen ("D:\\input.txt","r", stdin);
    int m,n,i,j,kt;
    int mang1[max_size];
    int mang2[max_size];
    scanf ("%d", &m);
    read(mang1,m);
    scanf ("%d", &n);
    read(mang2,n);
    in(mang1,mang2,m,n);
    return 0;
}
