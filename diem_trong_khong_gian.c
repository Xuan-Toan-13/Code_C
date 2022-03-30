
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct
{
    double x, y, z;
} Diem;
void nhap_diem(Diem *d)
{
    scanf("%lf %lf %lf", &d->x, &d->y, &d->z);
}
void in_toa_do (Diem *d, int t)
{
    printf("(%.*lf, %.*lf, %.*lf)\n",t,d->x,t,d->y,t,d->z);
}
void tinh_khoang_cach(Diem *d1, Diem *d2, int t)
{
    double k;
    k=pow((d1->x-d2->x),2)+pow((d1->y-d2->y),2)+pow((d1->z-d2->z),2);
    printf("%.*lf",t,sqrt(k));
}
int main()
{
    Diem d1;
    nhap_diem(&d1);
    Diem d2;
    nhap_diem(&d2);
    int t;
    scanf("%d", &t);
    in_toa_do(&d1,t);
    in_toa_do(&d2,t);
    tinh_khoang_cach(&d1,&d2,t);
//    free(d1);
//    free(d2);
    return 0;
}
