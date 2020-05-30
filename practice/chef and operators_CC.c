#include <stdio.h>

int main(){
    int t = 0, a = 0, b = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d%d", &a, &b);
        if(a>b){
            printf(">\n");
        }
        else if(a<b){
            printf("<\n");
        }
        else{
            printf("=\n");
        }
    }
}