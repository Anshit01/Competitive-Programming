#include <stdio.h>
#include <string.h>

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        char arr[n][12];
        for(int i = 0; i < n; i++){
            scanf("%[^\n]", arr[i]);
        }
        for(int i = 0; i < n; i++){
            printf("%s\n", arr[i]);
        }
    }
}