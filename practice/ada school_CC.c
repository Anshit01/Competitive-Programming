#include <stdio.h>

int main(){
    int t, n, m;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &m);
        n *= m;
        if(n % 2 == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}