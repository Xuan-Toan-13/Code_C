#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    double a,b,c,d,e,f,d0,d1,d2;
    printf ("Nhap he so cua phuong trinh 1\n");//ax+by=c
    printf ("a = ");
    scanf ("%lf", &a);
    printf ("b = ");
    scanf ("%lf", &b);
    printf ("c = ");
    scanf("%lf", &c);
    printf ("Nhap he so cua phuong trinh 2\n");//dx+ey=f
    printf ("d = ");
    scanf ("%lf", &d);
    printf ("e = ");
    scanf ("%lf", &e);
    printf ("f = ");
    scanf("%lf", &f);
    // dùng quy tắc Cramer để giải hệ phương trình
    d0=a*e-b*d;
    d1=c*e-b*f;
    d2=a*f-d*c;
    if (d0==0)
    {
        if (d1==0 && d2==0)
        {
            printf("He phuong trinh vo so nghiem");
        }
        else
        {
            printf("He phuong trinh vo nghiem");
        }
    }
    else
    {
        printf("He phuong trinh co nghiem duy nhat\n");
        printf("x = %.2lf\n", d1/d0);
        printf("y = %.2lf\n", d2/d0);
    }
    return 0;
}
