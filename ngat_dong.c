#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 505
void read(int x[], int n, int r)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf ("%d", &x[i]);
    }
}
void in(int x[], int n, int r)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("%6d", x[i]);
        if (i%r==4)
        {
            printf("\n");
        }
    }
}
int main()
{
    //freopen ("D:\\input.txt","r", stdin);
    int n,i,r;
    scanf ("%d", &n);
    int mang[n];
    read(mang,n,r);
    scanf ("%d", &r);
    in(mang,n,r);
    return 0;
}
