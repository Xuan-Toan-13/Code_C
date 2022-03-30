#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    double a,b,c,x1,x2,d,x;
    printf("Nhap he so a = ");
    scanf("%lf", &a);
    printf("Nhap he so b = ");
    scanf("%lf", &b);
    printf("Nhap he so c = ");
    scanf("%lf", &c);
    if (a==0)
    {
        if (b==0 && c==0)
        {
            printf("Phuong trinh vo so nghiem");
        }
        else if(b==0 && c!=0)
        {
            printf("Phuong trinh vo nghiem");
        }
        else
        {
            printf("Phuong trinh co 1 nghiem don\n");
            printf("x = %.2lf", -c/b);
        }
    }
    else
    {
        d=b*b-4*a*c;
        if (d>0)
        {
            printf("Phuong trinh co 2 nghiem phan biet\n");
            printf("x1 = %.2lf\n",(-b-sqrt(d))/(2*a));
            printf("x2 = %.2lf\n",(-b+sqrt(d))/(2*a));
        }
        else if (d==0)
        {
            printf("Phuong trinh co nghiem kep\n");
            printf("x1 = x2 = %.2lf",-b/(2*a));
        }
        else
        {
            printf("Phuong trinh vo nghiem");
        }
    }
    return 0;
}
