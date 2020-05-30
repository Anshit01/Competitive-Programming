#include <stdio.h>

int op[100];

int swap(int arr[], int i, int j){
    arr[i] = arr[i] + arr[j] - (arr[j] = arr[i]);
}

int main(){
    int t, n;
    int arr[100];
    scanf("%d", &t);
    while(t--){
        int current = 1, opl = n-1, gotoo;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                if(arr[j] == i){
                    if(j - i + 1 < opl){
                        gotoo = i-1;
                    }
                    else{
                        gotoo = j - opl;
                    }
                    for(int c = gotoo; c < j; c++){
                        opl--;
                        if(op[c] == 1){
                            break;
                        }
                        else{
                            swap(arr, c, c+1);
                        }
                    }
                }
            }

        }
        printf("%d", arr[0]);
        for(int i = 1; i<n; i++){
            printf(" %d", arr[i]);
        }
        printf("\n");
    }
}