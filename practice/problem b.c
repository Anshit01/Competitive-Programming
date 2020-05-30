#include <stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i< n; i++){
        for(int j = i+1; j < n; j++){
            sum += (arr[i] > arr[j])? arr[i] - arr[j] : arr[j] - arr[i];
        }
    }
    printf("%d\n", sum);
}