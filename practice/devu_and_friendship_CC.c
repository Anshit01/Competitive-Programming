#include <stdio.h>

int main(){
    int t, n, l, smallest, greatest, counter;
    scanf("%d", &t);
    while(t--){
        l = 0;
        scanf("%d", &n);
        int arr[50];
        scanf("%d", &arr[0]);
        smallest = greatest = arr[0];
        for(int i = 1; i < n; i++){
            scanf("%d", &arr[i]);
            if(arr[i] > greatest){
                greatest = arr[i];
            }
            if(arr[i] < smallest){
                smallest = arr[i];
            }
        }
        for(int i = smallest; i <= greatest; i++){
            counter = 0;
            for(int j = 0; j < n; j++){
                if(arr[j] == i){
                    counter++;
                }
            }
            if(counter > 1){
                l += counter -1;
            }
        }
        printf("%d\n", n - l);
    }
}