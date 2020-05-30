#include <stdio.h>

int main(){
    FILE *ptr = fopen("a", "r");
    long a = 0;
    fseek(ptr, 0, SEEK_END);
    a = ftell(ptr);
    printf("%d\n", a);
}