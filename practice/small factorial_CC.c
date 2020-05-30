#include <stdio.h>

int main(){
    int t, a;
    scanf("%d", &t);
    while(t--){
        int res = 1;
        scanf("%d", &a);
        while(a>1){
            res *= a;
            a--;
        }
        printf("%d\n", res);
    }
}