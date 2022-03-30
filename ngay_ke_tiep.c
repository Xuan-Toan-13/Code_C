
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen ("D:\\input.txt", "r", stdin);
    int d, m, y;
    scanf("%d%d%d",&d,&m,&y);
    printf("Ngay hien tai: %d/%d/%d\n", d,m,y);
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if(d==31)
        {
            printf("Ngay ke tiep: 1/%d/%d\n",m+1,y);
            break;
        }
        else
        {
            printf("Ngay ke tiep: %d/%d/%d\n",d+1,m,y);
            break;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        if (d==30)
        {
            printf("Ngay ke tiep: 1/%d/%d\n",m+1,y);
            break;
        }
        else
        {
            printf("Ngay ke tiep: %d/%d/%d\n",d+1,m,y);
            break;
        }
    case 2:
        if (y%400==0 || y%4==0 && y%100!=0)
        {
            if (d==29)
            {
                printf("Ngay ke tiep: 1/3/%d\n",y);
                break;
            }
            else
            {
                printf("Ngay ke tiep: %d/2/%d\n",d+1,y);
                break;
            }
        }
        else if (d==28)
        {
            printf("Ngay ke tiep: 1/3/%d\n",y);
            break;
        }
        else
        {
            printf("Ngay ke tiep: %d/2/%d\n",d+1,y);
            break;
        }
    case 12:
        if (d==31)
        {
            printf("Ngay ke tiep: 1/1/%d\n",y+1);
            break;
        }
        else
        {
            printf("Ngay ke tiep: %d/12/%d\n",d+1,y);
            break;
        }
    }

    return 0;
}
