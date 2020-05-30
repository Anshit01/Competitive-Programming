#include <stdio.h>

int main(){
    int n, m, a, sum = 0, res;
    scanf("%d%d", &n, &m);
    while(n--){
        scanf("%d", &a);
        sum += a;
    }
    res = sum / m;
    if((int)(sum % m) != 0){
        res++;
    }
    printf("%d\n", res);
}