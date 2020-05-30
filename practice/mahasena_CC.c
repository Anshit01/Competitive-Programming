#include <stdio.h>

int main(){
    int n, i = 0, a;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &a);
        if(a%2 == 0){
            i++;
        }
        else{
            i--;
        }
    }
    printf((i > 0)? "READY FOR BATTLE":"NOT READY");
}