#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void nhap_mang(int *a, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}
void dao_nguoc(int *x, int n)
{
    int i;
    for (i=n-1; i>=0; i--)
    {
        printf("%d ", x[i]);
    }
}
int main(){
    int n;
    int *x;
    scanf ("%d", &n);
    x=(int*)malloc(n*sizeof(int));
    nhap_mang(x,n);
    dao_nguoc(x,n);
return 0;
}
