#include <stdio.h>
#include <string.h>

struct s{
    int s;
}s;

void f(struct s s){
    s.s = 10;
    printf("%d", s.s);
}

int main(){
    f(s);
    printf("%d", s.s);
    
}