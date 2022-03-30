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
    ngay_truoc_do(t);
    printf("Ngay truoc do: %d/%d/%d\n", t->d,t->m,t->y);
}
void ngay_truoc_do(Date *t)
{
    switch(t->m)
    {
    case 2:
    case 4:
    case 6:
    case 8:
    case 9:
    case 11:
        if (t->d==1)
        {
            t->d=31;
            t->m-=1;
           break;
        }
        else
        {
            t->d-=1;
            break;
        }
    case 5:
    case 7:
    case 10:
    case 12:
        if (t->d==1)
        {
            t->d=30;
            t->m-=1;
           break;
        }
        else
        {
            t->d-=1;
           break;
        }
    case 3:
        if (t->y%400==0 || t->y%4==0 && t->y%100!=0)
        {
            if (t->d==1)
            {
                t->d=29;
                t->m-=1;
              break;
            }
            else
            {
                t->d-=1;
               break;
            }
        }
        else if (t->d==1)
        {
            t->d=28;
            t->m-=1;
           break;
        }
        else
        {
            t->d-=1;
          break;
        }
    case 1:
        if (t->d==1)
        {
            t->d=31;
            t->m=12;
            t->y-=1;
           break;
        }
        else
        {
            t->d-=1;
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

