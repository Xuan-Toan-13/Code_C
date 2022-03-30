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
int doi_xung(int x[], int n)
{
    int i;
    for (i=0; i<n/2; i++)
    {
        if (x[i]!=x[n-i-1])
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
   // freopen ("D:\\input.txt","r", stdin);
    int t,i;
    scanf("%d", &t);
    int x[max_size];
    for (i=0; i<t; i++)
    {
        int j=0;
        x[j]=nhap();
        while (x[j]!=0)
        {
            j++;
            x[j]=nhap();
        }
        doi_xung(x,j);
        if(doi_xung(x,j)==1)
        {
            printf("Testcase %d: Symmetric\n", i);
        }
        else
        {
            printf("Testcase %d: Asymmetric\n", i);
        }
    }
    return 0;
}
