#include <stdio.h>

int main(){
    int t, n, n2, a, diff, arr[200000];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        n2 = n * 2;
        diff = 0;
        for(int i = 0; i < n2; i++){
            scanf("%d", &a);
            arr[i] = (a == 1)? -1 : 1;
            diff += arr[i];
        }
        for(int i = 1; i < n; i++){
            int cursor_max = n+(2*i);
            for(int cursor = n-(2*i); cursor <= cursor_max; cursor++){
                
            }
        }
    }
}