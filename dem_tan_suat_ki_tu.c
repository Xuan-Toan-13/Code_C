#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 1005
int dem_ki_tu(char s[chuoi], char t)
{
    int i,dem=0;
    for (i=0; i<strlen(s); i++)
    {
        if (t>='a')
        {
            if (s[i]<='Z')
            {
                s[i]+=32;
            }
            if (s[i]==t)
            {
                dem++;
            }
        }
        else
        {
            if (s[i]>='a')
            {
                s[i]-=32;
            }
            if (s[i]==t)
            {
                dem++;
            }
        }
    }
    return dem;
}
int main()
{
    char s[chuoi];
    gets(s);
    char t;
    scanf ("%c",&t);
    printf("%d", dem_ki_tu(s,t));
    return 0;
}

