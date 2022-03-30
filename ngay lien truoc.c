#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    freopen ("D:\\input.txt", "r", stdin);
    int d,m,y;
    scanf("%d %d %d",&d,&m,&y);
    printf("Ngay hien tai: %d/%d/%d\n", d,m,y);
    switch (m)
    {
    case 2:
    case 4:
    case 6:
    case 8:
    case 9:
    case 11:
        if(d==1)
        {
            printf("Ngay truoc do: 31/%d/%d\n",m-1,y);
        }
        else
        {
            printf("Ngay truoc do: %d/%d/%d\n",d-1,m,y);
        }
        break;
    case 5:
    case 7:
    case 10:
    case 12:
        if(d==1)
        {
            printf("Ngay truoc do: 30/%d/%d\n",m-1,y);
        }
        else
        {
            printf("Ngay truoc do: %d/%d/%d\n", d-1,m,y);
        }
        break;
    case 1:
        if(d==1)
        {
            printf("Ngay truoc do: 31/12/%d\n",y-1);
        }
        else
        {
            printf("Ngay truoc do: %d/%d/%d\n", d-1,m,y);
        }
        break;
    case 3:
        if(y%4==0 && y%100!=0 || y%400==0)
        {
            if (d==1)
            {
                printf("Ngay truoc do: 29/2/%d",y);
            }
            else
            {
                printf("Ngay truoc do: %d/%d/%d\n", d-1,m,y);
            }
        }
        else if(d==1)
        {
            printf("Ngay truoc do: 28/2/%d",y);
        }
        else
        {
            printf("Ngay truoc do: %d/%d/%d\n",d-1, m, y);
        }
        break;
    }
    return 0;
}
