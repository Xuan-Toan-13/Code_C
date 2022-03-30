#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    unsigned int a;
    do
    {
        scanf("%u", &a);

        if(a==0) {
            continue;
        }
        printf("0x%08x\n",a);
    }
    while (a!=0);
    return 0;
}
