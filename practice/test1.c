#include <stdio.h>

int main(){
    int n, num, arr[100], i, j;
    scanf("%d", &n);
    for(i =0; i < n; i++){
        scanf("%d", &arr[i]);

    }
    scanf("%d", &num);
    for(i = 0; i<n; i++){
        if(arr[i] > num){
            for(j = n-1; j >= i; j--){
                arr[j+1] = arr[j];
            }
            arr[i] = num;
            break;
        }
    }
    for(i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
}