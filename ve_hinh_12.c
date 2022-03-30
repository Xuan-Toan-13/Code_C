
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    freopen("D:\\input.txt", "r", stdin);
    int t,r,c,s,i,j;
    scanf("%d", &t);
    while (t>0)
    {
        scanf ("%d%d%d", &r, &c, &s);
        for (i=0; i<r*s*2; i++)
        {
            for (j=0; j<c*s*2; j++)
            {
                if ((j-i-s)%(2*s)==0)
                {
                    printf ("\\");
                }
                else if ((j+i+s+1)%(2*s)==0)
                {
                    printf("/");
                }
                else
                {
                    printf (".");
                }
            }
            printf ("\n");
        }
        printf ("\n");
        t--;

    }
    return 0;
}

