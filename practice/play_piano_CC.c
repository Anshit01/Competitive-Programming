#include <stdio.h>

int main(){
    int t, a;
    scanf("%d", &t);
    char s[101];
    while(t--){
        scanf("%s", s);
        a = 1;
        for(int i = 0; s[i] != '\0'; i += 2){
            if(s[i] == s[i+1]){
                a = 0;
                break;
            }
        }
        printf((a == 1)? "yes\n" : "no\n");
    }
}