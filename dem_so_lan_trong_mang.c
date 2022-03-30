#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 55
int kiem_tra (int x[], int n, int a)
{
    int i;
    int dem=0;
      for (i=0; i<n; i++)
    {
        if (x[i]==a)
        {
            dem+=1;
        }
    }
    return dem;
}
int main()
{
   freopen ("D:\\input.txt","r", stdin);
    int n,a,i, dem=0;
     scanf("%d", &n);
    int mang[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &mang[i]);
    }
    scanf ("%d", &a);
   printf ("%d", kiem_tra(mang,n,a));
    return 0;
}


