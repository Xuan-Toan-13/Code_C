#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100

void read_array(int a[], int n)
{
    int i;
    for(i=1; i<=n ; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}

void show_array(int a[], int n)
{
    int i;
    for (i=1; i<=n; i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n");
}

int count_array(int a[], int n)
{
    int i,count=0;
    for (i=1; i<=n; i++)
    {
        if(a[i]==5)
        {
            count++;
        }
    }
    return count;
}

int sum_even_array(int a[], int n)
{
    int i,sum=0;
    for(i=1; i<=n; i++)
    {
        if(a[i]%2==0)
        {
            sum+=a[i];
        }
    }
    return sum;
}

void delete_array(int a[], int n)
{
    int i,j=0;
    if(n<10)
    {
        printf("Khong co phan tu nay de xoa\n");
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            if(i==10)
            {
                free(a[10]);
            }
            printf("%4d", a[i]);
        }
    }
}

int main()
{
    int arr[MAX];
    int n;
    printf("Nhap so phan tu cua mang n = ");
    scanf("%d", &n);
    read_array(arr,n);
    printf("Mang\n");
    show_array(arr,n);
    printf("So phan tu trong mang bang 5 la %d\n",count_array(arr,n));
    printf("Tong phan tu chan trong mang la %d\n",sum_even_array(arr,n));
    printf("Xoa phan tu thu 10 cua mang\n");
    delete_array(arr,n);
    return 0;
}
