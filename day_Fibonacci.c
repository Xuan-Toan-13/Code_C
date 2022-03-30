#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    // freopen("D:\\input.txt", "r", stdin);
    int n,t,i,j,s1,s2,s;
    s=0;
    s1=1;
    s2=1;
    scanf("%d", &t);
    while (t>0)
    {
        scanf ("%d", &n);
        if (n>2)
        {
            for (j=3; j<=n; j++)
            {
                s=s1+s2;
                s1=s2;
                s2=s;
            }
        }
        else
        {
            s=1;
        }
        printf ("%d\n", s);
        s=0;
        s1=1;
        s2=1;
        t--;
    }
    return 0;
}
