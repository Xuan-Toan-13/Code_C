#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max_size 100
void doc_mang(int x[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
}
void dem_chan_le(int x[], int n, int j)
{

    int i;
    int chan=0,le=0;
    for (i=0; i<n; i++)
    {
        if(x[i]%2==0)
        {
            chan+=1;
        }
        else
        {
            le+=1;
        }
    }
    printf("Testcase %d: %d even element(s), %d odd element(s)\n",j,chan,le);
}
int main()
{
    //freopen ("D:\\input.txt","r", stdin);
    int tc,n,i;
    scanf("%d", &tc);
    scanf("%d", &n);
    int mang[n];
    for (i=0; i<tc; i++)
    {
        doc_mang(mang, n);
        dem_chan_le(mang,n,i);
    }
    return 0;
}
