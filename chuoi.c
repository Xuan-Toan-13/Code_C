#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int mstrlen(char *str)
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}
void mstrcpy(char*des, char*src)
{
    int len=mstrlen(src);
    int i;
    for(i=0; i<len; i++)
    {
        des[i]=src[i];
    }
    des[i]='\0';
}
char* mstrcat(char str1[], char str2[])
{
    char *str3 = malloc(sizeof(str1)+sizeof(str2));
    int i,len1,len2,len3;
    len1=mstrlen(str1);
    len2=mstrlen(str2);
    len3=len1+len2;
    for (i=0; i<len3; i++)
    {
        if (i<len1)
        {
            str3[i]=str1[i];
        }
        else
        {
            str3[i]=str2[i-len1];
        }
    }
    str3[i]='\0';
    return str3;
}
int mstrcmp(char*str1,char*str2)
{
    int len1,len2,i;
    len1=mstrlen(str1);
    len2=mstrlen(str2);
    for (i=0; i<=len1; i++)
    {
        if(str1[i]!=str2[i])
        {
            return str1[i]-str2[i];
        }
    }
    return 0;
}
int main()
{
    char st1[]="Anh Huong";
    char st2[]=" Toan";
    // strlen(st1);
    // strcpy(st2,st1);
    // strcat(st2,st1);
    // strcmp(st1,st2);
    int kq= mstrcmp(st1,st2);
    printf("%d",kq);

    return 0;
}
