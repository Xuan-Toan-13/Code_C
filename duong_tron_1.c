#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define M_PI 3.14159265358979323846
typedef struct
{
    double x,y;
    double r;
} Tron;
void nhap_toa_do (Tron *c)
{
    scanf ("%lf %lf", &c->x, &c->y);
    scanf ("%lf",&c->r);
}
void chu_vi(Tron *c, int t)
{
    printf("Chu vi = %.*lf\n",t,2*M_PI*c->r);
}
void dien_tich(Tron *c, int t)
{
    printf("Dien tich = %.*lf\n",t,(c->r)*(c->r)*M_PI);
}
int main()
{
    int tc,i;
    scanf ("%d", &tc);
    for (i=0; i<tc; i++)
    {
        Tron c;
        nhap_toa_do(&c);
        int t;
        scanf("%d", &t);
        printf("Tam = (%.*lf, %.*lf)\n",t,c.x,t,c.y);
        printf("Ban kinh = %.*lf\n",t,c.r);
        chu_vi(&c,t);
        dien_tich(&c,t);
    }

    return 0;
}
