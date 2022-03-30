#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    int t,h,i;
    double x,M,m;
    scanf("%d", &t);
    while (t>0)
    {
        scanf("%d",&h);
        for (i=1; i<=h; i++)
        {
            scanf("%lf", &x);
            if (i==1)
            {
                m=x; M=x;
            }
            if(x>=M)
            {
                M=x;
            }
            if (x<=m)
            {
                m=x;
            }
        }
        t--;
        printf("Min = %15.3lf;     Max = %15.3lf\n", m,M);
    }
    return 0;
}
