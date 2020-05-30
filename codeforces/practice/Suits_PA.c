#include <stdio.h>

int min(int a, int b, int c){
    if(a < b && a < c){
        return a;
    }
    if(b < c){
        return b;
    }
    return c;
}

int main(){
    int a, b, c, d, e, f, cost;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    if(f >= e){
        cost = min(b, c, d) * f;
        d -= min(b, c, d);
        cost += e * ((d < a)? d : a);
    }
    else{
        cost = e * ((d < a)? d : a);
        d -= (d < a)? d : a;
        cost += f * min(b, c, d);
    }
    printf("%d\n", cost);
}