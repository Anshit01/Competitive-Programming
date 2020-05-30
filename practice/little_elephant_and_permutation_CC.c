#include <stdio.h>

void swap(int arr[], int a, int b){
    arr[a] = arr[a] + arr[b] - (arr[b] = arr[a]);
}

int main(){
    int t, n;
    scanf("%d", &t);
    int arr[100];
    while(t--){
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int i = 0;
        while(i < n-1){
            if(arr[i] > arr[i+1]){
                swap(arr, i, i+1);
                i += 2;
            }
            else{
                i++;
            }
        }
        for(i = 0; i < n; i++){
            if(arr[i] > arr[i+1]){
                printf("NO\n");
                break;
            }
        }
        if(i == n){
            printf("YES\n");
        }

    }
}