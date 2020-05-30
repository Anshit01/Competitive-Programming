#include <stdio.h>

int main(){
    int t, sum, a;
    char s[1001], c;
    scanf("%d", &t);
    while(t--){
        sum = 0;
        scanf("%s", s);
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] >= '0' && s[i] <= '9'){
                sum += s[i] - '0';
            }
        }
        printf("%d\n", sum);
    }
    
}