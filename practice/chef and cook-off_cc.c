#include <stdio.h>

int main(){
    int n, s = 0, b;
    scanf("%d", &n);
    while(n--){
        for(int i = 0; i < 5; i++){
            scanf("%d", &b);
            if(b == 1){
                s++;
            }

        }
        switch(s){
            case 0 : printf("Beginner");
            break;
            case 1 : printf("Junior Developer");
                break;
            case 2 :
                printf("Middle Developer");
                break;
            case 3 :
                printf("Senior Developer");
                break;
            case 4 :
                printf("Hacker");
                break;
            case 5 :
                printf("Jeff Dean");
                break;
            
        }
        printf("\n");
        s = 0;
    }
}