#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct
{
    int t;
    int m;
} Phan_so;
void nhap_phan_so(Phan_so *p1)
{
    scanf ("%d", &p1->t);
    scanf ("%d", &p1->m);
}
int UCLN(int a, int b)
{
    a=abs(a);
    b=abs(b);
    while(a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
void rut_gon(Phan_so *p)
{
    int c=UCLN(p->t, p->m);

    if (p->m<0)
    {
        p->t=-p->t;
        p->m=-p->m;
    }
    p->t=p->t/c;
    p->m=p->m/c;
}
void in_phan_so(Phan_so *q)
{
    printf("%d/%d\n",q->t,q->m);
}
void tinh_toan(Phan_so *q1, Phan_so*q2)
{
    rut_gon(q1);
    printf("q1 = ");
    in_phan_so(q1);
    rut_gon(q2);
    printf("q2 = ");
    in_phan_so(q2);
    Phan_so tong;
    tong.t=q1->t*q2->m+q1->m*q2->t;
    tong.m=q1->m*q2->m;
    rut_gon(&tong);
    printf("q1+q2 = ");
    in_phan_so(&tong);
    Phan_so hieu;
    hieu.t=q1->t*q2->m-q1->m*q2->t;
    hieu.m=q1->m*q2->m;
    rut_gon(&hieu);
    printf("q1-q2 = ");
    in_phan_so(&hieu);
    Phan_so tich;
    tich.t=q1->t*q2->t;
    tich.m=q1->m*q2->m;
    rut_gon(&tich);
    printf("q1*q2 = ");
    in_phan_so(&tich);
    Phan_so thuong;
    thuong.t=q1->t*q2->m;
    thuong.m=q1->m*q2->t;
    rut_gon(&thuong);
    printf("q1:q2 = ");
    in_phan_so(&thuong);
}
int main()
{
    //freopen ("D:\\input.txt","r", stdin);
    int tc,i;
    scanf ("%d", &tc);
    for (i=0; i<tc; i++)
    {
        Phan_so p1;
        nhap_phan_so(&p1);
        Phan_so p2;
        nhap_phan_so(&p2);
        tinh_toan(&p1,&p2);
        printf("\n");
    }
    return 0;
}
