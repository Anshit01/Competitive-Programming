#include <stdio.h>

int main(){
    int t, n, k, res;
    char str[100000];
    scanf("%d", &t);
    while(t--){
        res = 0;
        scanf("%d%s", &n, str);
        for(int i = 0; i < n -1; i++){
            for(int j = i + 1; j < n; j++){
               if(str[i] == str[j]){
                   k = 1;
                   while(str[i+k] == str[j+k]){
                       k++;
                   }
                   if(k > res){
                       res = k;
                   }
               }
            }
        }
        printf("%d\n", res);
    }
}