#include <stdio.h>

int main(){
    int t, a, b;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &a, &b);
        printf("%d %d\n", (a > b)? a : b, a+b);
    }
}