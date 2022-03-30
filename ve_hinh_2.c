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
        int m,n;
        scanf("%d%d", &m, &n);
        int i, j;
        for(i = 1; i <= m; i++)
        {
            for(j = 1; j<= n; j++)
            {
                if(j == 1 || i == 1 || i == m || j == n)
                {
                    printf("*");
                }
                else printf(" ");
            }
            printf("\n");
        }
        t--;
printf("\n");
    }
    return 0;
}
