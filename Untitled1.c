#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char maSV[10];
    char ho_ten[30];
    int nam_sinh;
} SinhVien;

void taoDanhSach(char *file_name)
{
    FILE *fp;
    fp = fopen(file_name, "wb");
    if(fp != NULL)
    {
        SinhVien sv;
        printf("nhap so luong sinh vien: ");
        int n;
        scanf("%d", &n);
        for(int i=1; i<= n; i++)
        {
            printf("Nhap thong tin sinh vien thu %d\n", i);
            fflush(stdin);
            printf("Ma Sinh Vien: ");
            gets(sv.maSV);
            printf("Ho ten: ");
            gets(sv.ho_ten);
            printf("Nam sinh: ");
            scanf("%d", &sv.nam_sinh);
            fwrite(&sv, sizeof(SinhVien), 1, fp);
        }

    }
    fclose(fp);
}

void hienDanhSach(char *file_name)
{
    FILE *fp;
    fp = fopen(file_name, "rb");
    if(fp != NULL)
    {
        printf("\t\t\t\t\t\t\t\t\tDANH SACH SINH VIEN\n\n");
        char stt[10] = "STT";
        char masv[10] = "Ma SV";
        char hoten[10] = "Ho ten";
        char namsinh[10] = "Nam sinh";
        printf("%30s%30s%30s%30s\n", stt, masv, hoten, namsinh);
        SinhVien sv;
        int i = 1;
        while(fread(&sv, sizeof(SinhVien), 1, fp) != NULL)
        {
            printf("%30d%30s%30s%30d\n", i, sv.maSV, sv.ho_ten, sv.nam_sinh);
            i++;
        }
    }
    fclose(fp);
}

void suaThongTin(char *file_name, char *file)
{
    FILE *fp;
    fp = fopen(file_name, "rb");

    FILE *f;
    f = fopen(file, "wb");

    char id[10];
    printf("Nhap ma sinh vien muon sua: ");
    fflush(stdin);
    gets(id);
    SinhVien sv, sv1;
    int check = 0;
    printf("Nhap ho ten chinh sua: ");
    gets(sv1.ho_ten);
    printf("Nhap nam sinh chinh sua: ");
    scanf("%d", &sv1.nam_sinh);
    while(fread(&sv, sizeof(SinhVien), 1, fp) != NULL)
    {
        if(strcmp(sv.maSV, id) == 0)
        {
            strcpy(sv1.maSV, sv.maSV);
            fwrite(&sv1, sizeof(SinhVien), 1, f);
        }
        else
        {
            fwrite(&sv, sizeof(SinhVien), 1, f);
        }
    }
    fclose(f);
    fclose(fp);
}

void menu()
{
    printf("\n\n");
    printf("__________________MENU__________________\n");
    printf("1. Tao danh sach sinh vien\n");
    printf("2. Hien thi danh sach sinh vien\n");
    printf("3. Sua thong tin sinh vien\n");
    printf("4. Ket thuc\n");
    printf("Lua chon: ");
}

int main()
{
    char *file_name = "DS_SV.C";
    char *file_name1 = "DS_SV1.C";
    while(1)
    {
        menu();
        int check;
        scanf("%d", &check);
        switch(check)
        {
        case 1:
            taoDanhSach(file_name);
            break;
        case 2:
            hienDanhSach(file_name);
            break;
        case 3:
            suaThongTin(file_name, file_name1);
            hienDanhSach(file_name1);
            break;
        case 4:
            exit(0);
        default:
            printf("Moi nhap lai!!");
            break;
        }
    }
    return 0;
}
