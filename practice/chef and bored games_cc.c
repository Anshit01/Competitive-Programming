#include <stdio.h>

int main(){
    int t, n, sq;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        sq = n * n;
        for(int i = 3; i <= n; i += 2){
            sq += (n - i + 1) * (n - i + 1);
        }
        printf("%d\n", sq);
    }
}