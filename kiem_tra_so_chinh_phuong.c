#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen ("D:\\input.txt", "r", stdin);
    int t,x,i,c;
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf ("%d", &x);
        c=sqrt(x);
        if (c*c==x)
        {
            printf ("%5d : YES\n", x);
        }
        else
        {
            printf ("%5d : NO\n", x);
        }
    }
    return 0;
}
