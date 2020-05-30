#include <stdio.h>
#include <math.h>

int main(){
    int t = 0, a = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &a);
        a = sqrtf(a);
        printf("%d\n", a);
    }
}