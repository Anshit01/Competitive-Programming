#include <stdio.h>

int main(){
    int t, n, i, score, arr[8];
    scanf("%d", &t);
    while(t--){
        for(int i = 0; i < 8; i++){
            arr[i] = 0;
        }
        scanf("%d", &n);
        while(n--){
            scanf("%d%d", &i, &score);
            i--;
            if(i < 8){
                if(arr[i] < score){
                    arr[i] = score;
                }
            }
        }
        score = 0;
        for(int i = 0; i < 8; i++){
            score += arr[i];
        }
        printf("%d\n", score);
    }
}