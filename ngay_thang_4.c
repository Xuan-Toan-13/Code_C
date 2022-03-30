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
void in(Date *t)
{
    printf("Ngay hien tai: %d/%d/%d\n", t->d,t->m,t->y);
    ngay_ke_tiep(t);
    printf("Ngay ke tiep: %d/%d/%d\n", t->d,t->m,t->y);
}
void ngay_ke_tiep(Date *t)
{
    switch(t->m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (t->d==31)
        {
            t->d=1;
            t->m+=1;
           break;
        }
        else
        {
            t->d+=1;
            break;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        if (t->d==30)
        {
            t->d=1;
            t->m+=1;
           break;
        }
        else
        {
            t->d+=1;
           break;
        }
    case 2:
        if (t->y%400==0 || t->y%4==0 && t->y%100!=0)
        {
            if (t->d==29)
            {
                t->d=1;
                t->m+=1;
              break;
            }
            else
            {
                t->d+=1;
               break;
            }
        }
        else if (t->d==28)
        {
            t->d=1;
            t->m+=1;
           break;
        }
        else
        {
            t->d+=1;
          break;
        }
    case 12:
        if (t->d==31)
        {
            t->d=1;
            t->m=1;
            t->y+=1;
           break;
        }
        else
        {
            t->d+=1;
           break;
        }
    }
}
int main()
{
    Date a;
    nhap_ngay_thang(&a);
    in(&a);
    return 0;
}
