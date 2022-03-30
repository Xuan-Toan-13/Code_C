#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen ("D:\\input.txt", "r", stdin);
    int d, m, y,s,i;
    scanf("%d%d%d",&d,&m,&y);
    s=d;
    for (i=1;i<m;i++)
    {
        switch (i)
        {
    case 4:
    case 6:
    case 9:
    case 11:
            s=s+30;
            break;
        case 2:
            if (y%4==0 && y%100!=0 || y%400==0)
            {
                s=s+29;
                break;
            }
            else
            {
                s=s+28;
                break;
            }
        default:
            s=s+31;
            break;

        }
    }
    printf("Ngay %d/%d la ngay thu %d cua nam %d", d,m,s,y);
    return 0;
}
