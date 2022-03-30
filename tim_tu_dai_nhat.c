#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 505
int tu_max(char *s)
{
    int i,j,len,len_max=0;
    for (i=0; i<strlen(s); i++)
    {
        if (s[i]!=32 && s[i]!=33 && s[i]!=63 && s[i]!=59 && s[i]!=58 && s[i]!=44 && s[i]!=46)
        {
            len=1;
            j=i+1;
        }
        while (s[j]!=32 && s[j]!=33 && s[j]!=63 && s[j]!=59 && s[j]!=58 && s[j]!=44 && s[j]!=46 && j<strlen(s))
        {
            len++;
            if (len>len_max)
            {
                len_max=len;
            }
            j++;
        }
    }
    return len_max;
}
int main()
{
    int tc,i;
    scanf("%d\n", &tc);
    for (i=0; i<tc; i++)
    {
        char *s=(char*)malloc(chuoi*sizeof(char));
        gets(s);
        tu_max(s);
        printf("%d\n",tu_max(s));
        free(s);
    }
    return 0;
}
