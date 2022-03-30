#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100
int main()
{
    int a[MAX], b[MAX], c[MAX];
    int i,j=0,k=0,n;
    printf("So phan tu cua day a la ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++)
    {
        if (a[i]>0)
        {
            b[j]=a[i];
            j++;
        }
        if (a[i]<0)
        {
            c[k]=a[i];
            k++;
        }
    }
    int positive=j;
    int negative=k;
    j=0;
    k=0;
    printf("phan tu mang b la:\n");
    for (j=0; j<positive; j++)
    {
        printf("b[%d] = %d\n",j,b[j]);
    }
    printf("phan tu mang c la:\n");
    for (k=0; k<negative; k++)
    {
        printf("c[%d] = %d\n",k,c[k]);
    }
    return 0;
}
