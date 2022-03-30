#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen ("D:\\input.txt", "r", stdin);
    unsigned int a,b,j,k,i;
    scanf("%u%u", &a,&b);
    for (i=a; i<=b; i++)
    {
        k=0; //i  la so nguyen to
        if(i==2)
        {
            printf("2\n");
            continue;
        }
        else if (i<2 || i%2==0)
        {
            continue;
        }
        else
        {
            for (j=3; j<=sqrt(i); j+=2)
            {
                if (i%j==0)
                {
                    k=1; //i khong la so nguyen to
                    break;
                }
            }
            if (k==0)
            {
                printf("%u\n",i);
            }
        }
    }
    return 0;
}
