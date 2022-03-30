#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    int t,a,b,c,i,j;
    scanf("%d", &t);
    while (t>0)
    {
        scanf ("%d%d%d", &a, &b,&c);
        for (i=0; i<a+a*c+1; i++)
        {
            for (j=0; j<b+b*c+1; j++)
            {
                if (i%(c+1)==0 || j%(c+1)==0)
                {
                    printf ("*");
                }
                else if (i==j||(j-i)%(c*2+2)==0||(i-j)%(c*2+2)==0)
                {
                    printf ("\\");
                }
                else if ((i+j)%(c*2+2)==0)
                {
                    printf ("/");
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
