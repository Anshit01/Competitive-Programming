#include <stdio.h>

int main(){
    int t, x1, y1, x2, y2;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        if(x1 != x2 && y1 != y2){
            printf("sad\n");
        }
        else if(x1 == x2){
            printf((y1 < y2)? "up\n" : "down\n");
        }
        else if(y1 == y2){
            printf((x1 < x2)? "right\n" : "left\n");
        }
    }
}