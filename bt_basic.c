#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*Bài 1
int main()
{
    int a[100];
    int n,i;
    printf("Nhap so luong phan tu cua day so nguyen: ");
    scanf("%d", &n);
    for( i=0; i<n; i++)
    {
        printf("Phan tu thu %d: ",i+1);
        scanf("%d", &a[i]);
    }
    int x;
    printf("Nhap so nguyen X: ");
    scanf("%d", &x);
    int count=0;
    for(i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            count++;
        }
    }
    if (count==0)
    {
        printf("%d khong co trong day",x);
    }
    else
    {
        printf("%d xuat hien %d lan trong day",x,count);
    }
    return 0;
}*/
/*Bài 2
int main()
{
    int a,b,i,u;
    printf("Nhap so nguyen duong a = ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b = ");
    scanf("%d", &b);
    int c=a*b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
        u=a;
    }
    printf("UCLN cua a va b la %d\n",u);
    printf("BCNN cua a va b la %d",c/u);
    return 0;
}*/

void nhap()
{
    int n;
    printf("Nhap so nguyen n = ");
    scanf("%d", &n);
}

void tinh_binh_phuong()
{
    int n,b;
    b=n*n;
    printf("n^2 = %d",b);
}

int main()
{
    nhap();
    tinh_binh_phuong();
    return 0;
}
