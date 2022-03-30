#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 505
void kiem_tra (int x[], int n, int a)
{
    int i,dem=0,vi_tri[n];
    for (i=0; i<n; i++)
    {
        if (x[i]==a)
        {
            vi_tri[dem]=i;
            dem+=1;
        }
    }
    if(dem==0)
    {
         printf ("The value %d does not exist in the given array", a);
    }
    else
    {
        printf ("The value %d appears %d time(s)\n", a,dem);
        printf ("At the following position(s): ");
        for(i=0; i<dem; i++)
        {
            printf("%d ", vi_tri[i]);

        }
    }
}
int main()
{

//freopen ("D:\\input.txt","r", stdin);
    int n,a,i,vi_tri;
    scanf("%d", &n);
    int mang[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &mang[i]);
    }
    scanf ("%d", &a);
    kiem_tra(mang,n,a);
    return 0;
}



