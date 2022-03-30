#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 1005
int main()
{
    //freopen ("D:\\input.txt","r", stdin);
    int n,i,j;
    scanf("%d", &n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("a[%d] = {",n);
    for (j=0; j<n; j++)
    {
        printf("%d",a[j]);
        if(j!=n-1)
        {
            printf(", ");
        }
    }
    printf("};");
    return 0;
}
