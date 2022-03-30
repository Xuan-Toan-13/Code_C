#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define LON_HON 1
#define BE_HON -1
#define BANG_NHAU 0
typedef struct
{
    int d,m,y;
} Date;
void nhap_ngay_thang(Date *d1)
{
    scanf("%d %d %d", &d1->d, &d1->m, &d1->y);
}
void in(Date *d1)
{
    printf("%d/%d/%d", d1->d,d1->m,d1->y);
}
void kiem_tra(Date *d1, Date *d2)
{
    in(d1);
    int kq=so_sanh(d1,d2);
    switch(kq)
    {
    case LON_HON:
        printf(" > ");
        break;
    case BE_HON:
        printf(" < ");
        break;
    case BANG_NHAU:
        printf(" = ");
        break;
    }
    in(d2);
}
int so_sanh(Date *d1, Date *d2)
{
    int hieu_nam =d1->y-d2->y;
    int hieu_thang=d1->m-d2->m;
    int hieu_ngay=d1->d-d2->d;
    if (hieu_nam==0)
    {
        if (hieu_thang==0)
        {
            if (hieu_ngay==0)
            {
                return BANG_NHAU;
            }
            if (hieu_ngay<0)
            {
                return BE_HON;
            }
            return LON_HON;
        }
        if (hieu_thang<0)
        {
            return BE_HON;
        }
        return LON_HON;
    }
    if (hieu_nam<0)
    {
        return BE_HON;
    }
    return LON_HON;
}
int main()
{
    int tc,i;
    scanf("%d", &tc);
    for (i=0; i<tc; i++)
    {
        Date d1,d2;
        nhap_ngay_thang(&d1);
        nhap_ngay_thang(&d2);
        kiem_tra(&d1,&d2);
        printf("\n");
    }
    return 0;
}
