#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct
{
    int d,m,y;
} Date;
void nhap_ngay_thang(Date *d1)
{
    scanf("%d %d %d", &d1->d, &d1->m, &d1->y);
}
void kiem_tra(Date *a)
{
    switch (a->m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (a->d==31)
        {
            printf("%d/%d/%d: Yes\n", a->d, a->m, a->y);
            break;
        }
        else
        {
            printf("%d/%d/%d: No\n", a->d, a->m, a->y);
            break;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        if (a->d==30)
        {
            printf("%d/%d/%d: Yes\n", a->d, a->m, a->y);
            break;
        }
        else
        {
            printf("%d/%d/%d: No\n", a->d, a->m, a->y);
            break;
        }
    case 2:
        if (a->y%4==0 && a->y%100!=0 || a->y%400==0)
        {
            if (a->d==29)
            {
                printf("%d/%d/%d: Yes\n", a->d, a->m, a->y);
                break;
            }
            else
            {
                printf("%d/%d/%d: No\n", a->d, a->m, a->y);
                break;
            }
        }
        else
        {
            if (a->d==28)
            {
                printf("%d/%d/%d: Yes\n", a->d, a->m, a->y);
                break;
            }
            else
            {
                printf("%d/%d/%d: No\n", a->d, a->m, a->y);
                break;
            }
        }
    }
}
int main()
{
    int tc,i;
    scanf ("%d", &tc);
    for (i=0; i<tc; i++)
    {
        Date t;
        nhap_ngay_thang(&t);
        kiem_tra(&t);
    }
    return 0;
}

