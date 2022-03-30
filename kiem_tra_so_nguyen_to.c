#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
   // freopen ("D:\\input.txt", "r", stdin);
    int t,i,j,x,k;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf ("%d", &x);
        if (x==2)
        {
            printf("%5d : YES\n", x);
            continue;
        }
        else if (x%2==0)
        {
            printf ("%5d : NO\n", x);
            continue;
        }
        else
        {
            for (j=3; j*j<=x; j+=2)
            {
                if (x%j==0)
                {
                    k=1;
                    break;
                }
                else
                {
                    k=0;
                }

            }

        }
        if(k==0)
        {
            printf ("%5d : YES\n", x);
        }
        if (k==1)
        {
            printf ("%5d : NO\n", x);
        }
    }
    return 0;
}
