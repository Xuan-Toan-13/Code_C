#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 105
char chuoi_con(char *s1, char *s2)
{
    int i,j;
    for (i=0; i<strlen(s2); i++)
    {
        int flag=1;
        for (j=0; j<strlen(s1); j++)
        {
            if (*(s2+i+j)!=*(s1+j))
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    // freopen("D:\\input.txt", "r", stdin);
    int tc,i;
    scanf ("%d\n", &tc);
    for(i=0; i<tc; i++)
    {
        char *s1=(char*)malloc(chuoi*sizeof(char));
        char *s2=(char*)malloc(chuoi*sizeof(char));
        gets (s1);
        gets (s2);
        if (chuoi_con(s1,s2)==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        free(s1);
        free(s2);
    }
    return 0;
}
