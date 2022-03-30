#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct
{
    double x,y;
} Diem;
void nhap_diem(Diem *d)
{
    scanf ("%lf %lf\n",&d->x, &d->y);
}
void vi_tri(Diem *d, int t)
{
    if (d->x>0 && d->y>0)
    {
        printf("(%.*lf, %.*lf) thuoc phan tu mat phang so 1\n",t,d->x,t,d->y);
    }
    else if (d->x<0 && d->y>0)
    {
        printf("(%.*lf, %.*lf) thuoc phan tu mat phang so 2\n",t,d->x,t,d->y);
    }
    else if (d->x<0 && d->y<0)
    {
        printf("(%.*lf, %.*lf) thuoc phan tu mat phang so 3\n",t,d->x,t,d->y);
    }
    else if (d->x>0 && d->y<0)
    {
        printf("(%.*lf, %.*lf) thuoc phan tu mat phang so 4\n",t,d->x,t,d->y);
    }
}
void khoang_cach(Diem *d1, Diem *d2, int t)
{
    double k;
    k=pow((d1->x-d2->x),2)+pow((d1->y-d2->y),2);
    printf ("Khoang cach = %.*lf\n", t,sqrt(k));
}
int main()
{
    int tc,i;
    scanf("%d\n",&tc);
    for (i=0; i<tc; i++)
    {
        Diem *d1=(Diem*)malloc(sizeof(Diem));
        nhap_diem(d1);
        Diem *d2=(Diem*)malloc(sizeof(Diem));
        nhap_diem(d2);
        int t;
        scanf("%d", &t);
        vi_tri(d1,t);
        vi_tri(d2,t);
        khoang_cach(d1,d2,t);
        free(d1);
        free(d2);
    }
    return 0;
}
