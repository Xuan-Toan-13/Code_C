#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int thang,nam;
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
    if (thang<=0 || nam<0)
    {
        printf("Khong hop le\n");
    }
    else
    {
        switch(thang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%d/%d co 31 ngay", thang, nam);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("%d/%d co 30 ngay", thang, nam);
            break;
        case 2:
            if (nam%4==0 && nam%100!=0 || nam%400==0)
            {
                printf("%d/%d co 29 ngay", thang, nam);
                break;
            }
            else
            {
                printf("%d/%d co 28 ngay", thang, nam);
                break;
            }
        }
    }
    return 0;
}
