#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 505
void sap_xep_chuoi(char *s)
{
    int len=strlen(s);
    int i,j;
    for (i=0; i<len-1; i++)
    {
        for (j=i+1; j<len; j++)
        {
            if (s[i]>s[j])
            {
                char c=s[i];
                s[i]=s[j];
                s[j]=c;
            }
        }
    }
}
void xoa_ki_tu_lap(char*s)
{
    int len=strlen(s);
    int i,j,k;
    for (i=0; i<len-1; i++)
    {
        for (j=i+1; j<len; j++)
        {
            if (s[i]==s[j])
            {
                for (k=j; k<len; k++)
                {
                    s[k]=s[k+1];
                }
                len--;
                j--;
            }
        }
    }
}
int main()
{
    char *s1=(char*)malloc(chuoi*sizeof(char));
    char *s2=(char*)malloc(chuoi*sizeof(char));
    gets(s1);
    gets(s2);
    char *s3=(char*)malloc(chuoi*sizeof(char));
    xoa_ki_tu_lap(s1);
    xoa_ki_tu_lap(s2);
    int i,j,k=0;
    for (i=0; i<strlen(s1); i++)
    {
        for (j=0; j<strlen(s2); j++)
        {
            if (s1[i]==s2[j])
            {
                s3[k]=s1[i];
                k++;
            }
        }
    }
    s3[k]='\0';
    sap_xep_chuoi(s3);
    printf("%s",s3);
    free(s1);
    free(s2);
    free(s3);
    return 0;
}
