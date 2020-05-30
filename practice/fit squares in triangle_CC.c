#include <stdio.h>

int main(){
    int t = 0, b = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &b);
        b /= 2;
        b = ((b*b) - b) / 2;
        printf("%d\n", b);
    }
}