#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100

void read_array(int a[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("Phan tu thu %d\n",i+1);
        scanf("%d", &a[i]);
    }
}

void check_min_max(int a[], int n)
{
    int i,max,min;
    max=a[0];
    min=a[0];
    for (i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("Max = %d\n", max);
    printf("Min = %d\n",min);
}
int main()
{
    int n;
    printf("Nhap so phan tu cua day la n = ");
    scanf("%d", &n);
    int a[MAX];
    read_array(a,n);
    check_min_max(a,n);
    return 0;
}
