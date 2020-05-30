#include <stdio.h>

void Test(int n){
    int res[100];
    int i = 0;
    while(n > 0){
        res[i] = n / 2;
        n = n % 2;
        printf("%d", res[i]);
        i++;
    }
}

int main(){
    Test(101);

}