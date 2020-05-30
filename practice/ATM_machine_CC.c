#include <stdio.h>

int main(){
    int t, n, k, a;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &k);
        for(int i = 0; i < n; i++){
            scanf("%d", &a);
            if(k >= a){
                k -= a;
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}