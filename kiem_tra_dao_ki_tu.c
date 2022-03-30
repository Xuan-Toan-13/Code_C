#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 1005
void chu_thuong(char *s)
{
    int i,len=strlen(s);
    for (i=0; i<len; i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
    }
}
void sap_xep_ki_tu(char *s)
{
    int i,j;
    int len =strlen(s);
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
int dao_ki_tu(char *s1, char *s2)
{
    int i;
    int len1=strlen(s1);
    int len2=strlen(s2);
    if (len1!=len2)
    {
        return 0;;
    }
    else
    {
        sap_xep_ki_tu(s1);
        chu_thuong(s1);
        sap_xep_ki_tu(s2);
        chu_thuong(s2);
        for (i=0; i<len1; i++)
        {
            if(s1[i]!=s2[i])
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    char *s1=(char*)malloc(chuoi*sizeof(char));
    char *s2=(char*)malloc(chuoi*sizeof(char));
    fflush(stdin);
    gets(s1);
    gets(s2);
    dao_ki_tu(s1,s2);
    if (dao_ki_tu(s1,s2)==0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    free(s1);
    free(s2);
    return 0;
}
