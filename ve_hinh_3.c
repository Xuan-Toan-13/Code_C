#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while(t > 0)
    {
        int a,i,j;
        scanf("%d", &a);
        for (i=1; i<=a; i++)
        {
            for (j=1; j<=a; j++)
            {
                if (i==1 || j==1 || i==a || j==a || i==j)
                {
                    printf("*");
                }
                else  printf (" ");
            }
            printf("\n");
        }
        t--;
        printf("\n");
    }
    return 0;
}
