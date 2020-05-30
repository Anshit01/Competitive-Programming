#include <stdio.h>
#include <math.h>

int in(int a, int start, int end){
    if(a >= start && a <= end){
        return 1;
    }
    return 0;
}

int main(){
    int t, first, last, res;
    scanf("%d", &t);
    while(t--){
        res = 0;
        scanf("%d%d", &first, &last);
        for(int i = first; i <= last; i++){
            if(i%10 == 2 || i%10 == 3 || i%10 == 9){
                res++;
            }
        }
        printf("%d\n", res);
    }
}