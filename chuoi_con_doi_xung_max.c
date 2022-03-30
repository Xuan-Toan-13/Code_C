#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 1005
/*
void chuoi_doi_xung(char *s)
{
   int start=0;
   int maxlen=1;
   int i;
   for (i=0; i<strlen(s); )
   {
       int j=i, k=i;
       while(k<strlen(s)-1 && s[k+1]==s[k]) k++;
       i=k+1;
       while (k<strlen(s)-1 && j>0 && s[k+1]==s[j-1])
       {
           --j;
           ++k;
       }
       int newlen=k-j+1;
       if (newlen>maxlen)
       {
           start=j;
           maxlen=newlen;
       }
   }
   printf("%d\n",maxlen);
   for (i=start; i<maxlen; i++)
   {
       printf("%c\n", s[i]);
   }
}
*/
int main()
{
    int i,j,l,r,k,max=0,check;
    char *s=(char*)malloc(chuoi*sizeof(char));
    fflush(stdin);
    gets(s);
    char **strc=(char**)calloc(strlen(s), sizeof(char*));
    for (i=0; i<strlen(s); i++)
    {
        strc[i]=(char*)calloc(strlen(s)+2,sizeof(char));
    }
    for(i=0; i<strlen(s); i++)
    {
        l=i;
        r=i;
        while(r<strlen(s) && s[i]==s[r+1])
        {
            r++;
        }
        i=r;
        while(r<strlen(s) && s[l-1]==s[r+1])
        {
            l--;
            r++;
        }
        check=r-l+1;
        strc[i][0]=check;
        if (check>max)
        {
            max=check;
        }
        k=0;
        for(j=l; j<=r; j++)
        {
            strc[i][1+k]=s[j];
            k++;
        }
    }
    printf("%d\n",max);
    for (i=0 ; i<strlen(s); i++)
    {
        if (strc[i][0]==max)
        {
            j=0;
            while(strc[i][j+1]!=0)
            {
                printf("%c",strc[i][1+j]);
                j++;
            }
            printf("\n");
        }
    }
    for (i=0; i<strlen(s); i++)
    {
        free(strc[i]);
    }
    free(strc);
    free(s);
    return 0;
}
