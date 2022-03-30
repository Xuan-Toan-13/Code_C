#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 1005
int nhap()
{
    int a;
    scanf("%d", &a);
    return a;
}
int kiem_tra_giam(int a[], int n)
{
    int i,j;
    for (i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                return 0;
            }
        }
    }
    return 1;
}
int kiem_tra_tang(int a[], int n)
{
    int i,j;
    for (i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
//freopen ("D:\\input.txt","r", stdin);
    int t,i;
    scanf("%d", &t);
    int a[max_size];
    for (i=0; i<t; i++)
    {
        int j=0;
        a[j]=nhap();
        while (a[j]!=0)
        {
            j++;
            a[j]=nhap();
        }
        if(kiem_tra_giam(a,j)==1)
        {
            printf("Testcase %d: Sorted descending\n",i);
        }
        else if (kiem_tra_tang(a,j)==1)
        {
            printf("Testcase %d: Sorted ascending\n",i);
        }
        else
        {
            printf("Testcase %d: Unsorted\n",i);
        }
    }
return 0;
}
