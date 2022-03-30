#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 205
int mstrcmp(char *s1, char *s2)
{
    int len1=strlen(s1);
    int len2=strlen(s2);
    int i;
    int min_strlen=len1<len2?len1:len2;
    for (i=0; i<min_strlen; i++)
    {
        if (s1[i]>s2[i])
        {
            return 1;
        }
        else if (s1[i]<s2[i])
        {
            return -1;
        }
    }
    if (len1>len2)
    {
        return 1;
    }
    else if (len1<len2)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
void in(char *s1, char *s2)
{
    if (mstrcmp(s1,s2)==0)
    {
        printf("\"%s\" = \"%s\"\n",s1,s2);
    }
    else if (mstrcmp(s1,s2)>0)
    {
        printf("\"%s\" > \"%s\"\n",s1,s2);
    }
    else
    {
        printf("\"%s\" < \"%s\"\n",s1,s2);
    }
}
int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    int tc,i;
    scanf("%d\n", &tc);
    char *s1;
    char *s2;
    while(tc)
    {
        s1=(char*)malloc(chuoi*sizeof(char));
        s2=(char*)malloc(chuoi*sizeof(char));
        gets(s1);
        gets(s2);
        in (s1,s2);
        free(s1);
        free(s2);
        tc--;
    }
    return 0;
}
