#include <stdio.h>

int main(){
    int t, r, a;
    scanf("%d%d", &t, &r);
    while(t--){
        scanf("%d", &a);
        if(a < r){
            printf("Bad boi\n");
        }
        else
        {
            printf("Good boi\n");
        }
        
    }
}