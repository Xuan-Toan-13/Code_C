#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char ho[20];
    char ten_dem[20];
    char ten[20];
} HO_TEN;

typedef struct
{
    char xa[40];
    char huyen[40];
    char tinh[40];
} QUE_QUAN;

typedef struct
{
    double toan;
    double ly;
    double hoa;
} DIEM_THI;

typedef struct
{
    HO_TEN ht;
    QUE_QUAN qq;
    DIEM_THI dt;
} THI_SINH;

void read(THI_SINH *ts)
{
    printf("HO TEN: ");
    fflush(stdin);
    scanf("%s %s %s", &ts->ht.ho, &ts->ht.ten_dem, &ts->ht.ten);
    printf("QUE QUAN\n");
    printf("Xa: ");
    fflush(stdin);
    gets(ts->qq.xa);
    printf("Huyen: ");
    fflush(stdin);
    gets(ts->qq.huyen);
    printf("Tinh: ");
    fflush(stdin);
    gets(ts->qq.tinh);
    fflush(stdin);
    printf("DIEM THI\n");
    printf("Diem toan: ");
    scanf("%lf", &ts->dt.toan);
    printf("Diem ly: ");
    scanf("%lf", &ts->dt.ly);
    printf("Diem hoa: ");
    scanf("%lf", &ts->dt.hoa);
}

void print(THI_SINH *ts)
{
    printf("%s %s %s %10s %10s %10s %5.1lf%5.1lf%5.1lf\n", ts->ht.ho,ts->ht.ten_dem, ts->ht.ten, ts->qq.xa, ts->qq.huyen, ts->qq.tinh, ts->dt.toan, ts->dt.ly, ts->dt.hoa);
}

void doi_cho(THI_SINH x[], int i, int j)
{
    THI_SINH tam;
    tam=x[i];
    x[i]=x[j];
    x[j]=tam;
}

int main()
{
    THI_SINH ts[20];
    int n,i,j;
    printf("Nhap so luong thi sinh: ");
    scanf("%d", &n);
    printf("\n");
    int tong_diem[n];
    for (i=0; i<n; i++)
    {
        printf("Thi sinh thu %d\n", i+1);
        read(&ts[i]);
        tong_diem[i]=ts[i].dt.hoa+ts[i].dt.toan+ts[i].dt.ly;
    }
    for (i=n-1; i>0; i--)
    {
        for (j=0; j<i; j++)
        {
            if (tong_diem[j]<tong_diem[j+1])
            {
                doi_cho(ts,j,j+1);
            }
        }
    }
    printf("%12s%13s %10s %10s  %6s%4s %4s\n", "Ho va Ten", "Xa","Huyen", "Tinh", "Toan", "Ly", "Hoa");
    for (i=0; i<n; i++)
    {
        print(&ts[i]);
    }
    return 0;
}
