#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 1005
int symmetric_substring(char *st, int left, int right, int len)
{
    int sublen = left + len / 2;
    for (int i = left; i <= sublen; i++)
    {
        if (st[i] != st[right + left - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int left = 0, right = 0, max = 0;
    char *st=(char*)malloc(chuoi*sizeof(char));
    gets(st);
    int len = strlen(st);
    int i, j;
    for (i = 0; i < len; i++)
    {
        for (j = len - 1; j > i; j--)
        {
            int k = j - i + 1;
            int temp = symmetric_substring(st,i, j, k);
            if (temp == 1)
            {
                if (max < k)
                {
                    max = k;
                    left = i;
                    right = j;
                }
            }
        }
    }

    if(max !=0)
    {
        printf("%d\n",max);
        int s;
        for (s = left; s <= right; s++)
        {
            printf("%c", st[s]);
        }
    }
    else
    {
        printf("1\n");
        for (int s = 0; s <= len; s++)
        {
            printf("%c\n", st[s]);
        }
    }
    free(st);
    return 0;
}
