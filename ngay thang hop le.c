#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen ("D:\\input.txt", "r", stdin);
    int d, m, y;
    scanf("%d%d%d",&d,&m,&y);
    if (y<0)
    {
        printf("%d/%d/%d: khong hop le\n",d,m,y);
    }
    else
    {

        switch(m)
        {

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

            if( d>0 && d<=31)
            {

                printf("%d/%d/%d: hop le\n",d,m,y);

                break;

            }

            else

            {
                printf("%d/%d/%d: khong hop le\n",d,m,y);

                break;

            }

        case 4:
        case 6:
        case 9:
        case 11:

            if( d<=30 && d>0 )
            {

                printf("%d/%d/%d: hop le\n",d,m,y);

                break;

            }

            else
            {
                printf("%d/%d/%d: khong hop le\n",d,m,y);

                break;

            }

        case 2:

            if( d <=28 && d > 0)
            {

                printf("%d/%d/%d: hop le\n",d,m,y);

                break;

            }
            else if( (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
                if(d>0 && d<=29)
                {
                    printf("%d/%d/%d: hop le\n",d,m,y);
                    break;
                }

                else

                {
                    printf("%d/%d/%d: khong hop le\n",d,m,y);

                    break;

                }

        default:
            printf("%d/%d/%d: khong hop le\n",d,m,y);
            break;

        }
    }
    return 0;
}
