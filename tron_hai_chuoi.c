#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 505
void tron_chuoi(char *s1, char *s2)
{
    int len1=strlen(s1);
    int len2=strlen(s2);
    int i,j;
    if (len1<len2)
    {
        for (i=0; i<len1; i++)
        {
            printf("%c%c", s1[i],s2[i]);
        }
        for (j=len1; j<len2; j++)
        {
            printf("%c",s2[j]);
        }
    }
    else
    {
        for (i=0; i<len2; i++)
        {
            printf("%c%c", s1[i],s2[i]);
        }
        for (j=len2; j<len1; j++)
        {
            printf("%c",s1[j]);
        }
    }
}
int main()
{
    char *s1=(char*)malloc(chuoi*sizeof(char));
    char *s2=(char*)malloc(chuoi*sizeof(char));
    fflush(stdin);
    gets(s1);
    gets(s2);
    tron_chuoi(s1,s2);
    free(s1);
    free(s2);
    return 0;
}
