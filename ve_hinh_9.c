#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    int t,r,c,h,w,i,j;
    scanf("%d", &t);
    while (t>0)
    {
        scanf ("%d%d%d%d", &r, &c, &h, &w);
        for (i=0; i<r*(h+1)+1; i++)
        {
            for (j=0; j<c*(w+1)+1; j++)
            {
                if (i%(h+1)==0 || j%(w+1)==0)
                {
                    printf ("*");
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
