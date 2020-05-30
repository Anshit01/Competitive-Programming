#include <stdio.h>

int main(){
    int t = 0, a = 0, i = 0,n = 0;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &a);
        while(a > 0){
            i = a % 10;
            a /= 10;
            if(i == 4){
                n++;
            }
        }
        printf("%d\n", n);
        n = 0;
    }
}

