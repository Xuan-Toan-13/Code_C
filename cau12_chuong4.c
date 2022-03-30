#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100
int main()
{
    int m,n,i,j,k=0;
    printf("So phan tu mang 1 la ");
    scanf("%d", &m);
    int a[MAX];
    for (i=0; i<m; i++)
    {
        printf("Phan tu thu %d la ",i+1);
        scanf("%d", &a[i]);
    }
    printf("So phan tu mang 2 la ");
    scanf("%d", &n);
    int b[MAX];
    for (j=0; j<n; j++)
    {
        printf("Phan tu thu %d la ",j+1);
        scanf("%d", &b[j]);
    }
    int c[MAX+MAX];
    int h=m+n;
    i=0, j=0;
    for (k=0; k<h; k++)
    {
        if (i<m && j<n)
        {
            if (a[i]<=b[j])
            {
                c[k]=a[i];
                i++;
            }
            else
            {
                c[k]=b[j];
                j++;
            }
        }
        else
        {
            if (i<m)
            {
                c[k]=a[i];
                i++;
            }
            else
                if(j<n)
                {
                    c[k]=b[j];
                    j++;
                }
        }
    }
    for (k=0; k<h; k++)
    {
        printf("%d ", c[k]);
    }
    return 0;
}
