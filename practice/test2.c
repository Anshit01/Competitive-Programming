#include <stdio.h>

int main(){
    char c;
    FILE *ptr = fopen("susu.c", "r");
    while(1){
        c = fgetc(ptr);
        if(c == EOF){
            break;
        }else{
            printf("%c", c);
        }
    }
    
    printf("%i\n", c);
    fclose(ptr);
}