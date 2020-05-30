#include <stdio.h>

int main(){
    int t, a, b, n, s;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d", &a, &b, &n, &s);
        if(s / n > a){
            s -= n * a;
            if(s > b){
                printf("NO");
            }
            else{
                printf("YES");
            }
        }
        else{
            s = s % n;
            if(b >= s){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
        printf("\n");
    }
}