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
        for (i=1; i<=r; i++)
        {
            for (j=1; j<=c; j++)
            {
                if (i%2==0)
                {
                    if (j%2!=0)
                    {
                        printf(".");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                else if (j%2==0)
                {
                    printf(".");
                }
                else
                {
                    printf("*");
                }

            }
            printf("\n");
        }
        t--;
        printf("\n");
    }
    return 0;
}
