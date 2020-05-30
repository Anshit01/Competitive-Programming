#include <stdio.h>

int main(){
    int t, n, a, ans;
    int arr[128];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        arr[0] = 0;
        for(int i = 1; i < n; i++){
            a = 0;
            for(int j = i-2; j >= 0; j--){
                if(arr[i-1] == arr[j]){
                    a = i-1-j;
                    break;
                }
            }
            arr[i] = (a==0)? 0 : a;
        }
        ans = 1;
        for(int i = 0; i < n-1; i++){
            if(arr[i] == arr[n-1]){
                ans++;
            }
        }
        printf("%d\n", ans);
    }
}