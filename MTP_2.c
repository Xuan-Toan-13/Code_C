#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int i,j;
void nhap_mang(int x[], int n)
{
    for (i=0; i<n; i++)
    {
        scanf("%2X", &x[i]);
    }
}
void in_mang(int x[], int n)
{
    for (i=0; i<n; i++)
    {
        printf("%02X", x[i]);
    }
}
void time_pad(int x[], int y[], int m, int n)
{
    int z[n];
    for (i=0; i<n; i++)
    {
        z[i]=x[i]^y[i%m];
    }
    in_mang(z,n);
}
int main(){
     freopen ("D:\\input.txt","r", stdin);
int klen,plen;
scanf ("%d", &klen);
int b[klen];
nhap_mang(b,klen);
scanf("%d", &plen);
int a[plen];
nhap_mang(a,plen);
time_pad(a,b,klen,plen);
return 0;
}

