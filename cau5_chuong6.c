#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    struct
    {
        char ho_ten[50];
        char que[30];
        char gioi_tinh[5];
    } personal_info;

    union
    {
        float diem_td;
        float diem_tin;
    } Nam;

    union
    {
        float diem_hat;
        float diem_mua;
    } Nu;

} Hoc_sinh;

int main()
{
    Hoc_sinh hs[50];
    int n;
    printf("Nhap so hoc sinh: ");
    scanf("%d", &n);
    fflush(stdin);
    int i;
    for (i=0; i<n; i++)
    {
        printf("NHAP THONG TIN HOC SINH THU %d\n",i+1);
        printf("Ho va ten: ");
        fflush(stdin);
        gets(hs[i].personal_info.ho_ten);
        printf("Que quan: ");
        fflush(stdin);
        gets(hs[i].personal_info.que);
        printf("Gioi tinh: ");
        fflush(stdin);
        gets(hs[i].personal_info.gioi_tinh);
        if(strcmp(hs[i].personal_info.gioi_tinh,"Nam")==0)
        {
            printf("Diem tin: ");
            scanf("%f",&hs[i].Nam.diem_tin);
            printf("Diem the duc: ");
            scanf("%f", &hs[i].Nam.diem_td);
        }
        else if(strcmp(hs[i].personal_info.gioi_tinh,"Nu")==0)
        {
            printf("Diem hat: ");
            scanf("%f",&hs[i].Nu.diem_hat);
            printf("Diem mua: ");
            scanf("%f", &hs[i].Nu.diem_mua);
        }
    }
    printf("\n\t\t\t\t\t DANH SACH HOC SINH NU\n");
    printf("\n%10s%30s%20s%20s%20s%20s\n","STT","Ho Ten", "Que","Diem hat","Diem mua","Tong\n");
    int count=1;
    for(i=0; i<n; i++)
    {
        if(strcmp(hs[i].personal_info.gioi_tinh,"Nu")==0)
        {
            printf("\n%10d%30s%20s%20.1f%20.1f%20.1f\n",count,hs[i].personal_info.ho_ten,hs[i].personal_info.que,hs[i].Nu.diem_hat,hs[i].Nu.diem_mua,hs[i].Nu.diem_hat+hs[i].Nu.diem_mua);
            count++;
        }
    }
    printf("\n\t\t\t\t\t DANH SACH HOC SINH NAM\n");
    printf("\n%10s%30s%20s%20s%20s%20s\n","STT","Ho Ten", "Que","Diem the duc","Diem tin","Tong\n");
    count=1;
    for(i=0; i<n; i++)
    {
        if(strcmp(hs[i].personal_info.gioi_tinh,"Nam")==0)
        {
            printf("\n%10d%30s%20s%20.1f%20.1f%20.1f\n",count,hs[i].personal_info.ho_ten,hs[i].personal_info.que,hs[i].Nam.diem_td,hs[i].Nam.diem_tin,hs[i].Nam.diem_td+hs[i].Nam.diem_tin);
            count++;
        }
    }
    return 0;
}
