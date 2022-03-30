#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    //freopen("D:\\input.txt", "r", stdin);
    int T,t;
    unsigned int n;
    scanf("%d",&T);
    for (t=1; t<=T; t++)
    {
        scanf("%u",&n);
        printf("%9u = 0x%08x\n", n,n);
    }
    return 0;
}
