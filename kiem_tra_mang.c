#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 55
int kiem_tra (int x[], int n, int a)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (x[i]==a)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    //freopen ("D:\\input.txt","r", stdin);
    int n,a,i;
    int mang[max_size];
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &mang[i]);
    }
    scanf ("%d", &a);
    int kq=kiem_tra(mang, n, a);
    if (kq==1)
    {
        printf ("Yes");
    }
    else
    {
        printf ("No");
    }
    return 0;
}

