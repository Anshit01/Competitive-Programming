#include <stdio.h>
#include <string.h>
int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        char first[100][11], last[100][11];
        for(int i = 0; i < n; i++){
            scanf("%s%s", first[i], last[i]);
        }
        for(int i = 0; i < n; i++){
            printf("%s", first[i]);
            for(int j = 0; j < n; j++){
                if(i != j && strcmp(first[i], first[j]) == 0){
                    printf(" %s", last[i]);
                    break;
                }
            }
            printf("\n");
        }
    }
}