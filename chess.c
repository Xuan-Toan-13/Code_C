
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int xH,xM,yH,yM;
    scanf("%d %d", &xH, &yH);
    scanf("%d %d", &xM, &yM);
    if ((xH==xM ||yH==yM)|| xM-yM==xH-yH ||xM+yM==xH+yH)
    {
        printf("Hau an duoc ma\n");
    }
    else
    {
        printf("Hau khong an duoc ma\n");
    }
    if((xM-xH)*(yM-yH)==2||(xM-xH)*(yM-yH)==-2)
    {
        printf("Ma an duoc hau\n");
    }
    else
    {
        printf("Ma khong an duoc hau");
    }
    return 0;
}


