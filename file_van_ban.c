#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct
{
    char msv[10];
    char ho_ten[30];
    char lop[10];
    int nam_sinh;
} sinh_vien;
int main()
{
    char *file_name="D:\\btap.txt";
    FILE* fp;
    fp=fopen(file_name,"rt");
    if (fp!= NULL)
    {
        sinh_vien sv;
        char temp[30];
        int dem=0;
        while (fgets(temp,30,fp)!=NULL);
        {
            printf("%s", temp);
            dem++;
        }
        printf("so dong = %d\n", dem);
        fclose(fp);
    }
    return 0;
}
