#include <stdio.h>
#include <string.h>

int main(){
    int t, x, slen, clen;
    char s[1000001], c[500];
    scanf("%d", &t);
    while(t--){
        scanf("%d %s", &x, s);
        slen = strlen(s);
        
        for(int l = 0; l <= x; l++){
            for(int i = l; s[i] != '\0'; i++){
                c[i-l] = s[i];
            }
            for
        }
    }
}