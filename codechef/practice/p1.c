#include <stdio.h>

int main(){
    int res[10], tmp[10];
    char c;
    int t, n, ans, tmpi;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(int i = 0; i < 10; i++){
            res[i] = 0;
        }
        for(int i = 0; i < n; i++){
            scanf("%d", &tmpi);
            for(int j = 9; j >= 0; j--){
                tmp[j] = tmpi % 10;
                tmpi /= 10;
            }
            for(int j = 0; j < 10; j++){
                res[j] = res[j] ^ tmp[j];
            }
        }
        ans = 0;
        for(int i = 0; i < 10; i++){
            if(res[i]){
                ans++;
            }
        }
        printf("%d\n", ans);
    }
}