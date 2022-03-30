#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void nhap_mang(int *a, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}
void hien_thi(int *a, int *b, int n, int m)
{
    int i,j;
    if(n>m)
    {
        for (i=0; i<m;  i++)
        {
            printf("%d %d ", a[i], b[i]);
        }
        for (j=m; j<n;  j++)
        {
            printf("%d ", a[j]);
        }
    }
    else
    {
        for (i=0; i<n;  i++)
        {
            printf("%d %d ", a[i], b[i]);
        }
        for (j=n; j<m;  j++)
        {
            printf("%d ", b[j]);
        }
    }
}
int main()
{
    int n,m;
    int *a,*b;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof (int));
    nhap_mang(a,n);
    scanf("%d",&m);
    b=(int*)malloc(m*sizeof( int));
    nhap_mang(b,m);
    hien_thi(a,b,n,m);
    free(a);
    free(b);
    return 0;
}
