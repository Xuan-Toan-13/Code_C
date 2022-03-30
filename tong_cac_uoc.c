#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    int t,i,x,j,s;
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        s=0;
        scanf ("%d", &x);
        for (j=1; j<=x; j++)
        {
            if (x % j==0 && j<x)
            {
                s=s+j;
            }
        }
        printf ("%d\n", s);
    }
    return 0;
}

