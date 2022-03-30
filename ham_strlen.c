#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 205
int mstrlen(char *c)
{
    int len=0;
    while (c[len]!='\0')
    {
        len++;
    }
   return len;
}
int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    int tc,i;
    char t[chuoi];
    scanf ("%d\n", &tc);
    for (i=0; i<tc; i++)
    {
        gets (t);
        mstrlen(t);
        printf("%d",mstrlen(t));
        printf("\n");
    }
    return 0;
}
