#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
    char so_dien_thoai[15];
    int so_tien;
} vacxin;

void nhap_du_lieu(char *file_name)
{
    FILE *fp;
    fp=fopen(file_name,"wb");
    if (fp!=NULL)
    {
        vacxin vx;
        printf("Nhap so nguoi ung ho: ");
        int n,i;
        scanf("%d", &n);
        for (i=0; i<n; i++)
        {
            printf("Thong tin nguoi thu %d\n",i+1);
            printf("So dien thoai: ");
            fflush(stdin);
            gets(vx.so_dien_thoai);
            printf("So tien ung ho: ");
            scanf("%d", &vx.so_tien);
            fwrite(&vx,sizeof(vacxin),1,fp);
        }
    }
    fclose(fp);
}

void hien_thi(char *file_name)
{
    FILE *fp;
    fp=fopen(file_name,"rb");
    if (fp!=NULL)
    {
        printf("\t\t\tDANH SACH UNG HO QUY VACXIN\n\n");
        char stt[10]="STT";
        char so_dien_thoai[20]="So dien thoai";
        char so_tien[10]="So tien";
        char tong_so_tien[15]="Tong tien";
        printf("%20s%20s%20s\n",stt,so_dien_thoai,so_tien);
        vacxin vx;
        int  tong_tien=0,i=1;
        while (fread(&vx,sizeof(vacxin),1,fp)!=NULL)
        {
            printf("%20d%20s%20d\n",i,vx.so_dien_thoai,vx.so_tien);
            tong_tien+=vx.so_tien;
            i++;
        }
        printf("%50s%10d",tong_so_tien,tong_tien);
    }
    fclose(fp);
}

void bo_sung_du_lieu(char *file_name)
{
    FILE *fp;
    fp=fopen(file_name,"ab");
    if (fp!=NULL)
    {
        vacxin vx;
        int t,i;
        do
        {
            printf("Bo sung so nguoi ung ho: ");
            scanf("%d", &t);
        }
        while(t<2);
        for (i=0; i<t; i++)
        {
            printf("So dien thoai: ");
            fflush(stdin);
            gets(vx.so_dien_thoai);
            printf("So tien ung ho: ");
            scanf("%d", &vx.so_tien);
            fwrite(&vx,sizeof(vacxin),1,fp);
        }
    }
    fclose(fp);
}

void menu()
{
    printf("\n\n");
    printf("__________________MENU__________________\n");
    printf("1. Nhap so lieu\n");
    printf("2. Bo sung so lieu\n");
    printf("3. Hien thi noi dung\n");
    printf("4. Ket thuc\n");
    printf("Option: ");
}

int main()
{
    char *file_name="SO_LIEU.C";
    while (1)
    {
        menu();
        int choice;
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            nhap_du_lieu(file_name);
            break;
        case 2:
            bo_sung_du_lieu(file_name);
            break;
        case 3:
            hien_thi(file_name);
            break;
        case 4:
            exit(0);
        default:
            printf("Moi nhap lai >.<");
            break;
        }
    }
    return 0;
}
