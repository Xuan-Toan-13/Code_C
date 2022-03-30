#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int klen,i,j,s[256];
void doi_cho(int x[], int i, int j)
{
    int doi;
    doi=x[i];
    x[i]=x[j];
    x[j]=doi;
}
int main()
{
     freopen ("D:\\input.txt","r", stdin);
    scanf("%d", &klen);
    for (i=0; i<256; i++)
    {
        s[i]=i;
    }
    int key[klen];
    for (i=0; i<klen; i++)
    {
        scanf ("%x", &key[i]);
    }
    j=0;
    for (i=0; i<256; i++)
    {
        j+=s[i]+key[i%klen];
        j%=256;
        doi_cho(s,i,j);
    }
    for (i=0; i<16; i++)
    {
        for (j=0; j<16; j++)
        {
            printf("%02x ", s[i*16+j]);
        }
        printf("\n");
    }
    return 0;
}
