#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define M_PI 3.14159265358979323846
typedef struct
{
    double x,y;
} Diem;
typedef struct
{

} Tam_giac;
void nhap_diem(Diem *d)
{
    scanf ("%lf %lf",&d->x, &d->y);
}
double khoang_cach(Diem *d1, Diem*d2)
{
    double k;
    k=sqrt(pow((d1->x-d2->x),2)+pow((d1->y-d2->y),2));
    return k;
}
void tinh_toan(Diem *d1, Diem *d2, Diem *d3)
{
    double a=khoang_cach(d1,d2);
    double b=khoang_cach(d2,d3);
    double c=khoang_cach(d1,d3);
    double p=(a+b+c)/2;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("s = %.5lf; p = %.5lf\n",s,a+b+c);
}
int main()
{
    int tc,i;
    scanf("%d", &tc);
    for (i=0; i<tc; i++)
    {
        Diem d1;
        Diem d2;
        Diem d3;
        nhap_diem(&d1);
        nhap_diem(&d2);
        nhap_diem(&d3);
        tinh_toan(&d1, &d2, &d3);
    }
    return 0;
}
