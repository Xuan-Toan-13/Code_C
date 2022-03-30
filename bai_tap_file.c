#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/* bai 1
int main()
{
    char *file_name="D:\\SO_NGUYEN.DAT";
    FILE *fp;
    fp=fopen(file_name,"wt");
    if (fp!=NULL)
    {
        printf("Nhap so luong so nguyen n = ");
        int n;
        scanf("%d",&n);
        int i;
        int a[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i=0; i<n; i++)
        {
            printf("%4d", a[i]);
            fprintf(fp,"%4d",a[i]);
        }
       fclose(fp);
    }
    return 0;
}
*/
/* bai 2
int main()
{
    char *file_name="D:\\SO_NGUYEN.DAT";
    FILE *fp;
    fp=fopen(file_name,"rt");
    while (!feof(fp))
    {
        int value;
        fscanf(fp,"%d", &value);
        printf("%4d", value);
    }
    return 0;
}*/
/*bai 3
int main()
{
    char *file_name;
    gets(file_name);
    FILE *fp;
    fp=fopen(file_name,"wt");
    if (fp!=NULL)
    {
        printf("Nhap so luong so nguyen n = ");
        int n;
        scanf("%d",&n);
        int i;
        int a[n];
        for (i=1; i<=n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i=1; i<=n; i++)
        {
            printf("%4d", a[i]);
            fprintf(fp,"%4d",a[i]);
            if (i%10==0)
            {
                fprintf(fp,"\n");
                printf("\n");
            }
        }
       fclose(fp);
    }
    return 0;
}
*/

int main()
{
    char file_name[50];
    gets(file_name);
    FILE *fp;
    fp=fopen(file_name,"r+t");
    while (!feof(fp))
    {
        int value;
        fscanf(fp,"%d", &value);
        printf("%4d", value);

    }
    fclose(fp);
    return 0;
}

