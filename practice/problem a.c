#include <stdio.h>

int main(){
    int n, x, a = 0, i = 0;
    scanf("%d%d", &n, &x);
    int x1 = x;
    while(n--){
        scanf("%d", &i);
        if(i>x1){
            x1 = x;
            a++;
        }
        x1 -= i;
    }
    printf("%d\n", a);
}