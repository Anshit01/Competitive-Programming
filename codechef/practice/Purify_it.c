#include <stdio.h>
#include <string.h>

void removeAt(char arr[], int n, int index){
    for(int i = index; i < n; i++){
        arr[i] = arr[i+1];
    }
}

int removeAll(char arr[], int n, int index){
    int len = 1;
    while(arr[index] == arr[index + len] && index + len < n){
        len++;
    }
    for(int i = index; i < n; i++){
        arr[i] = arr[i + len];
    }
    return len;
}

int main(){
    int t, n, total_changes, doubles, req, op;
    char arr[1000];
    scanf("%d", &t);
    while(t--){
        scanf("%s", arr);
        n = strlen(arr);
        int previous = arr[0];
        total_changes = doubles = req = op = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] != previous){
                previous = arr[i];
                total_changes++;
            }
        }
        total_changes++;
        for(int i = 1; i < n; i++){
            if(arr[i] != arr[i-1] && arr[i] != arr[i+1]){
                removeAt(arr, n, i);
                op++;
                total_changes -= 2;
                n--;
            }
            if(total_changes <= 3){
                break;
            }
        }
        if(arr[0] != arr[1] && total_changes > 3){
                removeAt(arr, n, 0);
                op++;
                total_changes--;
                n--;
            }
        if(arr[n-2] != arr[n-1] && total_changes > 3){
            removeAt(arr, n, n-1);
            op++;
            total_changes--;
            n--;
        }
        int minrep = 0, minrepIndex;
        for(int i = 0; i < total_changes - 3; i++){
            int rep = 0, repindex;
            
            for(int j = 0; j < n-1; j++){
                if(arr[j] == arr[j+1]){
                    rep++;
                }
                else{
                    rep++;
                    repindex = rep;
                    if(rep < minrep){
                        minrep = rep;
                        minrepIndex = repindex;
                    }
                }
                
            }
            int len = removeAll(arr, n, minrepIndex);
                op += len;
                total_changes -= len;
                n -= len;
        }
        printf("%d\n", op);
        

    }
}