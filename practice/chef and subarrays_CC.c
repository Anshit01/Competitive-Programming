#include <stdio.h>

int main(){
    int t = 0, n, sum, product, res;
    scanf("%d", &t);
    for(int _ = 0; _ < t; _++){
        res = 0;
        scanf("%d", &n);
        int arr[n];
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
        }
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                for(int k = i; k <= j; k++){
                    sum += arr[k];
                    product *= arr[k];
                }
                if(sum == product){
                    res++;
                }
                sum = 0;
                product = 1;
            }
        }
        printf("%d\n", res + n);
    }
}