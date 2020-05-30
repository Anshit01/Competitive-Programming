#include <stdio.h>

int main(){
    int t, r, n;
    int arr[] = {100, 50, 10, 5, 2, 1};
    scanf("%d", &t);
    while(t--){
        n = 0;
        scanf("%d", &r);
        for(int i = 0; i < 6; i++){
            n += r / arr[i];
            r %= arr[i];
        }
        printf("%d\n", n);
    }
}