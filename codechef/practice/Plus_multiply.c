#include <stdio.h>

int main(){
    int t, n, a, count0, count2, res;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        count0 = count2 = res = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &a);
            if(a == 0){
                count0++;
            }
            else if(a == 2){
                count2++;
            }
        }
        res = (count0 * (count0 - 1) / 2) + (count2 * (count2 - 1) / 2);

        printf("%d\n", res);
    }
}