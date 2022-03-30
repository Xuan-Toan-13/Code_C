#include <stdio.h>
#include <stdlib.h>

int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    int i,j,k,tc,a,b,c,l;
    scanf("%d",&tc);
    for (i=1; i<=tc; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        for(l=1; l<=a; l++)
        {
            for (j=0; j<2*c; j++)
            {
                int m;
                for (m=1; m<=b; m++)
                {

                    for (k=0; k<2*c; k++)
                    {
                        if(abs(k-j) == c)
                        {
                            printf("\\");
                        }
                        else if((j+k) == c-1 || (j+k) == 3*c-1)
                        {
                            printf("/");
                        }
                        else
                        {
                            int m;
                            if(k >=1 && k <= 2*c-2)
                            {
                                if(j+k < c || (abs(k-j) > c) || (j+k > 3*c-1))
                                    printf(".");
                                else
                                    printf("*");
                            }
                            else
                                printf(".");
                        }
                    }
                }
                printf("\n");
            }
        }
        printf("\n");
    }

    return 0;
}
