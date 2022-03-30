#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while (t>0)
    {
        int r,c,i,j;
        scanf("%d%d", &r, &c);
        for (i=1; i<=3*r+1; i++)
        {
            for (j=1; j<=3*c+1; j++)
            {
                if ( j%3==1 || i%3==1 )
                {
                    printf("*");
                }
                else
                {
                    printf (".");
                }
            }
            printf("\n");
        }
        t--;
        printf("\n");
    }
    return 0;
}
