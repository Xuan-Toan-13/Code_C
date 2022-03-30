#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define M_PI 3.14159265358979323846
typedef struct
{
    double a,b;
    double r;
    double x,y;
} Tron;
void nhap_toa_do (Tron *c)
{
    scanf ("%lf %lf", &c->a, &c->b);
    scanf ("%lf",&c->r);
    scanf ("%lf %lf", &c->x, &c->y);
}
void vi_tri_tuong_quan(Tron *c)
{
    double k;
    k=sqrt(pow((c->x-c->a),2)+pow((c->y-c->b),2));
    if (k>c->r)
    {
        printf("Diem P nam ngoai hinh tron C\n");
    }
    if (k<c->r)
    {
        printf("Diem P nam trong hinh tron C\n");
    }
    if (k==c->r)
    {
        printf("Diem P nam tren duong tron C\n");
    }
}
int main()
{
    int tc,i;
    scanf("%d", &tc);
    for (i=0; i<tc; i++)
    {
        Tron c;
        nhap_toa_do(&c);
        vi_tri_tuong_quan(&c);
    }
    return 0;
}
