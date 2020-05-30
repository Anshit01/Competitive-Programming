#include <stdio.h>
#include <math.h>

int isPrime(int n){
    int sq = sqrt(n);
    for(int i = 2; i <= sq; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t, a, b, c, sum;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &a, &b);
        sum = a = a + b;
        sum++;
        while(1){
            if(isPrime(sum)){
                break;
            }
            else{
                sum++;
            }
        }
        c = sum - a;
        printf("%d\n", c);
        
    }
}