#include <stdio.h>
#include <math.h>

int check(int arr[], int l){
    for(int i = 0; i < l/2; i++){
        if(arr[i] != arr[l-i-1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t, a, l;
    scanf("%d", &t);
    while(t--){
        l = 0;
        scanf("%d", &a);
        while(a / (int)pow(10, l)>0){
            l++;
        }
        int arr[l];
        for(int i = 0; i < l; i++){
            arr[i] = a % 10;
            a /= 10;
        }
        if(check(arr, l)){
            printf("wins\n");
        }
        else{
            printf("losses\n");
        }
    }

}