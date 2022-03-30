#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 1005
void thong_ke (char s[chuoi])
{
    int i,j,dem=0;
    int t[128]= {0};
    for (i=0; i<128; i++)
    {
        for (j=0; j<strlen(s); j++)
        {
            if (s[j]>='A' && s[j]<='Z')
            {
                s[j]+=32;
            }
            if ((char)i==s[j])
            {
                t[s[j]]++;
            }
        }
        if (t[i]>0)
        {
            printf("%c: %d\n",(char)i,t[i]);
        }
    }
}
int main()
{
    char s[chuoi];
    gets(s);
    thong_ke(s);
    return 0;
}
