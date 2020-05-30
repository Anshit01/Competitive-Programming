#include <stdio.h>

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if(n%10 == 0){
            printf("0\n");
        }
        else if(n%5 == 0){
            printf("1\n");
        }
        else{
            printf("-1\n");
        }
    }
}