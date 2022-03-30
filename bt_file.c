#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char ho_ten[40];
    int tuoi;
    double diem_tb;
} SINH_VIEN;

void list_student(char *file_name)
{
    FILE *fp;
    fp = fopen(file_name, "wb");
    if(fp != NULL)
    {
        SINH_VIEN sv;
        printf("Nhap so luong sinh vien: ");
        int n;
        scanf("%d", &n);
        for(int i=1; i<= n; i++)
        {
            printf("Nhap thong tin sinh vien thu %d\n", i);
            printf("Ho ten: ");
            fflush(stdin);
            gets(sv.ho_ten);
            printf("Tuoi: ");
            scanf("%d", &sv.tuoi);
            printf("Diem trung binh: ");
            scanf("%lf", &sv.diem_tb);
            fwrite(&sv, sizeof(SINH_VIEN), 1, fp);
        }
    }
    fclose(fp);
}

void show_list(char *file_name)
{
    FILE *fp;
    fp = fopen(file_name, "rb");
    if(fp != NULL)
    {
        printf("\t\t\t\t\t\t\t\t\tDANH SACH SINH VIEN\n\n");
        char stt[10] = "STT";
        char hoten[10] = "Ho ten";
        char tuoi[10] = "Tuoi";
        char diem_tb[30]="Diem TB";
        printf("%30s%30s%30s%30s\n", stt, hoten, tuoi,diem_tb);
        SINH_VIEN sv;
        int i = 1;
        while(fread(&sv, sizeof(SINH_VIEN), 1, fp) != NULL)
        {
            printf("%30d%30s%30d%30.1lf\n", i, sv.ho_ten, sv.tuoi,sv.diem_tb);
            i++;
        }
    }
    fclose(fp);
}

void add_student(char *file_name)
{
    FILE *fp;
    fp=fopen(file_name,"ab");
    if (fp!=NULL)
    {
        SINH_VIEN sv;
        int t,i;

        printf("So luong sinh vien bo sung: ");
        scanf("%d", &t);

        for (i=0; i<t; i++)
        {
            printf("Ho ten: ");
            fflush(stdin);
            gets(sv.ho_ten);
            printf("Tuoi: ");
            scanf("%d", &sv.tuoi);
            printf("Diem trung binh: ");
            scanf("%f", &sv.diem_tb);
            fwrite(&sv, sizeof(SINH_VIEN), 1, fp);
        }
    }
    fclose(fp);
}

int main()
{
    char *file_name="DSACH.C";
    list_student(file_name);
    show_list(file_name);

    return 0;
}

