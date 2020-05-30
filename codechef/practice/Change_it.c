#include <stdio.h>

int main(){
    int t, n, arr[100], count[101], maxcount;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(int i = 0; i < 101; i++){
            count[i] = 0;
        }
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            count[arr[i]]++;
        }
        maxcount = 0;
        for(int i = 1; i < 101; i++){
            if(count[i] > maxcount){
                maxcount = count[i];
            }
        }
        printf("%d\n", n - maxcount);
    }
}