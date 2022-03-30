
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
        for (i=1; i<=r*(h+1)+h; i++)
        {
            for (j=1; j<=(c+1)*w+c; j++)
            {
                if (i%(h+1)==0 && j%(w+1)!=0 )
                {
                    printf ("-");
                }
                else if(i%(h+1)==0 && j%(w+1)==0)
                {
                    printf ("+");
                }
                else if (j%(w+1)==0 && i%(h+1)!=0)
                {
                    printf ("|");
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
