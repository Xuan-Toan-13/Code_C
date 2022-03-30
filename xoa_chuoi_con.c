#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 1005
void xoa_chuoi(char *s, int m, int n)
{
    int len=strlen(s);
    char *k=(char*)malloc(chuoi*sizeof(char));
    int i,j=0;
    for (i=0; i<len; i++)
    {
        if (i<m || i>=m+n)
        {
            k[j]=s[i];
            j++;
        }
    }
    k[j]='\n';
    printf("%s",k);
    free(k);
}
int main()
{
    int m,n;
    scanf ("%d %d\n", &m, &n);
    char s[chuoi];
    gets(s);
    xoa_chuoi(s,m,n);
    return 0;
}
