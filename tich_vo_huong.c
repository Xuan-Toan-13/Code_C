#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 55
void doc_mang(int x[], int y[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf ("%d", &x[i]);
    }
    for (i=0; i<n; i++)
    {
        scanf("%d", &y[i]);
    }
}
int tich_vo_huong(int x[], int y[], int n)
{
    int i,t=0;
    for (i=0; i<n; i++){
            t+=x[i]*y[i];
    }
            printf("%d", t);
}
int main()
{
    //freopen ("D:\\input.txt","r", stdin);
int n,t;
scanf("%d", &n);
int mang1[n];
int mang2[n];
doc_mang(mang1,mang2,n);
tich_vo_huong(mang1, mang2, n);
    return 0;
}
