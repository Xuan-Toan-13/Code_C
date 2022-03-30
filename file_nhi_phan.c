#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100

int a[MAX];

void sinh_so_ngau_nhien()
{
    int i;
    for (i=0 ; i<100; i++)
    {
        a[i]=i;
    }
}

void ghi_file(char *file_name, int a[], int n)
{
    FILE *fp;
    fp=fopen(file_name,"wb");
    if (fp != NULL)
    {
        int i;
        for (i=0; i<MAX; i++)
        {
            fwrite(&a[i], sizeof(int), 1, fp);
        }
        fclose(fp);
    }
}

void doc_file(char *file_name)
{
    FILE *fp;
    fp=fopen(file_name, "rb");
    if (fp != NULL)
    {
        int i;
        int value;
        for (i=0; i<MAX; i++)
        {
            fread(&value, sizeof(int), 1, fp);
            printf("%d ", value);
        }
        printf("\n");
        fclose(fp);
    }

}

void doc_file_nhi_phan(char *file_name, int n)
{
    FILE *fp;
    fp=fopen(file_name, "rb");
    if (fp != NULL)
    {
        int value;
        fseek(fp,n*sizeof(int), SEEK_SET);
        fread(&value, sizeof(int), 1, fp);
        printf("Phan tu thu %d = %d\n", n, value);
        fclose(fp);
    }
}
int main()
{
    int a[MAX];
    sinh_so_ngau_nhien(a);
    char *file_name ="D:\\btap.txt";
    ghi_file(file_name,a,MAX);
    doc_file(file_name);
    doc_file_nhi_phan(file_name,50);
    return 0;
}
