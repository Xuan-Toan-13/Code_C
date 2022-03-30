#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen ("D:\\input.txt", "r", stdin);
    int t,i,x,j;
    scanf ("%d", &t);
    for (i=1; i<=t; i++)
    {
        j=2;
        scanf ("%d", &x);
        if (x==1)
        {
            printf ("%5d = %d\n", x,x);
        }
        else
        {
            printf("%5d = ",x);
            while (x>1)
            {
                if (x % j == 0)
                {
                    printf ("%d ", j);
                    if (x != j)
                    {
                        printf ("x ");
                    }
                    x /= j;
                }
                else
                {
                    j++;
                }
            }
        }
        printf ("\n");
    }


    return 0;
}
