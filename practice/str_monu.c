#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    scanf("%s", s);
    int len = strlen(s);
    if(len <= 10){
        printf("%s", s);
    }
    else{
        printf("%c%d%c", s[0], len-2, s[len-1]);
    }
}