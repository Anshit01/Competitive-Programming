#include <stdio.h>

int main(){
    long long a = 0;
    scanf("%I64d", &a);
    if(a%2){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}