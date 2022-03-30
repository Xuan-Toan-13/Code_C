#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 205
char *mstrchr(char *s, int c)
{
    int i;
    char *t=s;
    for (i=0; i<strlen(s); i++)
    {
        if (s[i]==(char)c)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    // freopen("D:\\input.txt", "r", stdin);
    int tc,i;
    char s[chuoi];
    char *t=s;
    int c;
    scanf ("%d\n", &tc);
    for (i=0; i<tc; i++)
    {
        scanf("%c\n",&c);
        gets(s);
        mstrchr(s,c);
        if (mstrchr(s,c)!=-1)
        {
            printf("\"%c\" exists in \"%s\". First pos = %d.\n",c,t,mstrchr(s,c));
        }
        else
        {
            printf("\"%c\" does not exist in \"%s\".\n",c,t);
        }
    }
    return 0;
}
