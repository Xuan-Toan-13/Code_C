#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100

void read_nu_sequence(int a[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("Phan tu thu %d cua day: ",i+1);
        scanf("%d", &a[i]);
    }
}

void show(int a[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n");
}

int cat_sequence(int a[], int b[],int c[],int n, int m)
{
    int i,j,k,h;
    h=m+n;
    i=j=k=0;
    for (k=0; k<h; k++)
    {
        if (i<m && j<n)
        {
            if (a[i]<=b[j])
            {
                c[k]=a[i];
                i++;
            }
            else
            {
                c[k]=b[j];
                j++;
            }
        }
        else
        {
            if (i<m)
            {
                c[k]=a[i];
                i++;
            }
            else if(j<n)
            {
                c[k]=b[j];
                j++;
            }
        }
    }
    return h;
}

void menu()
{
    printf("\n________________________MENU________________________\n");
    printf("1. Nhap 2 day so nguyen theo chieu tang dan\n");
    printf("2. Ghep hai day\n");
    printf("3. In 3 day so\n");
    printf("4. Ket thuc\n");
    printf("Option: ");
}

int main()
{
    int a[MAX],b[MAX],c[MAX+MAX];
    int m,n,h;
    while (1)
    {
        menu();
        int k;
        scanf("%d", &k);
        switch(k)
        {
        case 1:
        {
            printf("Nhap so phan tu day so thu 1: ");
            scanf("%d", &m);
            printf("DAY 1\n");
            read_nu_sequence(a,m);
            printf("Nhap so phan tu day so thu 2: ");
            scanf("%d", &n);
            printf("DAY 2\n");
            read_nu_sequence(b,n);
            break;
        }
        case 2:
        {
            printf("Ghep 2 day\n");
            h=cat_sequence(a,b,c,m,n);
            break;
        }
        case 3:
        {
            printf("Day so thu 1\n");
            show(a,m);
            printf("Day so thu 2\n");
            show(b,n);
            printf("Day so thu 3\n");
            show(c,h);
            break;
        }
        case 4:
            printf("KET THUC\n");
            exit(0);
        default:
            printf("Choose 1 to 4\n");
        }
    }
    return 0;
}
