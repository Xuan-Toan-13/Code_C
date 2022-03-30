#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct
{
    int b;
    double *hs;
} Da_thuc;
void nhap_da_thuc(Da_thuc *dt)
{
    scanf("%d", &dt->b);
    dt->hs=(double*)malloc((dt->b+1)*sizeof(double));
    int i;
    for (i=0; i<=dt->b; i++)
    {
        scanf("%lf", &dt->hs[i]);
    }
}
double tinh_gia_tri(Da_thuc *dt, double x)
{
   double gt=dt->hs[dt->b];
   int i;
   for (i=1; i<=dt->b; i++)
   {
       gt=gt*x+dt->hs[dt->b-i];
   }
   return gt;
}
Da_thuc tong_he_so(Da_thuc *dt1, Da_thuc *dt2)
{
    Da_thuc dt;
    dt.b=dt1->b>dt2->b?dt1->b:dt2->b;
    dt.hs=(double*)malloc((dt.b+1)*sizeof(double));
    int min_b=dt1->b<dt2->b?dt1->b:dt2->b;
    int i;
    for (i=0; i<=min_b; i++)
    {
        dt.hs[i]=dt1->hs[i]+dt2->hs[i];
    }
    for (i=min_b+1; i<=dt1->b; i++)
    {
        dt.hs[i]=dt1->hs[i];
    }
    for (i=min_b+1; i<=dt2->b; i++)
    {
        dt.hs[i]=dt2->hs[i];
    }
    return dt;
}
Da_thuc hieu_he_so(Da_thuc *dt1, Da_thuc *dt2)
{
    Da_thuc dt;
    dt.b=dt1->b>dt2->b?dt1->b:dt2->b;
    dt.hs=(double*)malloc((dt.b+1)*sizeof(double));
    int min_b=dt1->b<dt2->b?dt1->b:dt2->b;
    int i;
    for (i=0; i<=min_b; i++)
    {
        dt.hs[i]=dt1->hs[i]-dt2->hs[i];
    }
    for (i=min_b+1; i<=dt1->b; i++)
    {
        dt.hs[i]=dt1->hs[i];
    }
    for (i=min_b+1; i<=dt2->b; i++)
    {
        dt.hs[i]=-dt2->hs[i];
    }
    return dt;
}
void in_he_so(Da_thuc dt)
{
    int i;
    for (i=0; i<=dt.b; i++)
    {
        printf("%.5lf ", dt.hs[i]);
    }
    printf("\n");
}
int main()
{
    int tc,i;
    double x;
    Da_thuc p1;
    Da_thuc p2;
    scanf("%d", &tc);
    for (i=0; i<tc; i++)
    {
        nhap_da_thuc(&p1);
        nhap_da_thuc(&p2);
        scanf("%lf", &x);
        printf("p1(x) = %.5lf\n", tinh_gia_tri(&p1,x));
         printf("p2(x) = %.5lf\n", tinh_gia_tri(&p2,x));
         printf("p1+p2 = ");
        in_he_so(tong_he_so(&p1,&p2));
        printf("p1-p2 = ");
        in_he_so(hieu_he_so(&p1,&p2));
        printf("\n");
    }
    return 0;
}
