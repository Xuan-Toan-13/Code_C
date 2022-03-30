#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void doiCho(int x[], int i, int j)
{
    int tam;
    tam=x[i];
    x[i]=x[j];
    x[j]=tam;
}
/*void sap_xep_chon(int x[], int n){
int i, j , index_min;
for (i=0; i<n-1; i++){
    index_min=i;
    for (j=i+1; j<n; j++){
        if(x[j]<x[index_min]){
            index_min=j;
        }
    }
    if (index_min !=i){
        doiCho(x,i,index_min);
    }
}
}*/
/*void sap_xep_noi_bot(int x[], int n)
{
    int i, j;
    for (i=n-1; i>0; i--)
    {
        for (j=0; j<i; j++)
        {
            if (x[j]>x[j+1])
            {
                doiCho(x, j, j+1);
            }
        }
    }
}*/
void sap_xep_chen(int x[], int n)
{
    int i,j;
    for (i=1; i<n; i++)
    {
        j=i;
        while (j>0 && x[j]<x[j-1] )
        {
            doiCho(x, j, j-1);
            j--;
        }
    }
}
void hien_thi(int x[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("%d ", x[i]);
    }
    printf ("\n");
}
int main()
{
    int a[5]= {29, 10, 14, 37, 13};
    printf ("Truoc khi sap xep: \n");
    hien_thi(a, 5);
    //sap_xep_chon(a,5);
    //sap_xep_noi_bot(a,5);
    sap_xep_chen(a,5);
    printf("Sau khi sap xep: \n");
    hien_thi(a,5);
    return 0;
}
