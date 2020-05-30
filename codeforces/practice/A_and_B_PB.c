#include <stdio.h>



int main(){
    int t, a, b, i;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &a, &b);
        i = 0;
        if(a > b){
            a -= b;
            b = 0;
        }
        else{
            b -= a;
            a = 0;
        }
        while(a != b){
            i++;
            if(a < b){
                a += i;
            }
            else{
                b += i;
            }
        }
        printf("%d\n", i);
    }
}