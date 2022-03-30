#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 1005
void hexa_so(char *s)
{
    int thap_phan = 0;
    int i = 0, length;
    length = strlen(s);
    for(i = 0; i < length; i+= 2)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            thap_phan += (s[i] - 48) * 16;
        }
        else if(s[i] >= 'A' && s[i] <= 'F')
        {
            thap_phan += (s[i] - 55) * 16;
        }
        else if(s[i] >= 'a' && s[i] <= 'f')
        {
            thap_phan += (s[i] - 87) * 16;
        }

        if(s[i + 1] >= '0' && s[i + 1] <= '9')
        {
            thap_phan += (s[i + 1] - 48);
        }
        else if(s[i + 1] >= 'A' && s[i + 1] <= 'F')
        {
            thap_phan += (s[i + 1] - 55);
        }
        else if(s[i + 1] >= 'a' && s[i + 1] <= 'f')
        {
            thap_phan += (s[i + 1] - 87);
        }
        if(i + 2 == length)
        {
            printf("%d", thap_phan);
            break;
        }
        printf("%d, ", thap_phan);
        thap_phan = 0;
    }
}
int main()
{
    char *s=(char*)malloc(chuoi*sizeof(char));
    gets(s);
    hexa_so(s);
    free(s);
    return 0;
}
