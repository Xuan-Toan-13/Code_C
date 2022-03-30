#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 205
void mstrcat(char *s1, char *s2)
{
    int i,len1,len2,len3;
    len1=strlen(s1);
    len2=strlen(s2);
    len3=len1+len2;
    char *s3;
    s3=(char*)malloc((len1+len2+1)*sizeof(char));
    for (i=0; i<len3; i++)
    {
        if (i<len1)
        {
            s3[i]=s1[i];
        }
        else
        {
            s3[i]=s2[i-len1];
        }
    }
    s3[i]='\0';
    printf("%s\n",s3);
    free(s3);
}
int main()
{
    //  freopen("D:\\input.txt", "r", stdin);
    int tc,i;
    scanf("%d\n", &tc);
    char *s1;
    char *s2;
    for (i=0; i<tc; i++)
    {
        s1=(char*)malloc(chuoi*sizeof (char));
        s2=(char*)malloc(chuoi*sizeof (char));
        gets(s1);
        gets(s2);
        mstrcat(s1,s2);
        free(s1);
        free(s2);
    }
    return 0;
}
