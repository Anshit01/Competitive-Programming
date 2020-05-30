#include <stdio.h>
#include <string.h>

int main(){
    int n, len, a;
    char s[1000];
    scanf("%s", s);
    len = strlen(s);
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        s[a] = '\0';
    }
    for(int i = 0; i < len; i++){
        if(s[i] != '\0'){
            printf("%c", s[i]);
        }
    }
}