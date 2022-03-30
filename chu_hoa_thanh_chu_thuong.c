#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define chuoi 205
int main(){
    char s[chuoi];
    gets(s);
    int i;
    for (i=0; i<strlen(s); i++){
        if (s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
  //  s[i]='\0';
    printf("%s", s);
return 0;
}
