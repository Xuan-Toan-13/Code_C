#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    double a,b,c;
    printf("Nhap canh a = ");
    scanf("%lf", &a);
    printf("Nhap canh b = ");
    scanf("%lf", &b);
    printf("Nhap canh c = ");
    scanf("%lf", &c);
    do
    {
        if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
        {
            printf("a, b, c tao thanh tam giac vuong");
        }
        else if (((a==b)&&a!=c) || ((a==c)&&a!=b )|| ((b==c)&&c!=a))
        {
            printf("a, b, c tao thanh tam giac can");
        }
        else if (a==b && a==c)
        {
            printf("a, b, c tao thanh tam giac deu");
        }
        else
        {
            printf("a, b, c la tam giac thuong");
        }
    }
    while(a+b<=c || a+c<=b || b+c<=a || a<=0 || b<=0 || c<=0);

return 0;
}
