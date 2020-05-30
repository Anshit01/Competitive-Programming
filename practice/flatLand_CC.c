#include <stdio.h>
#include <math.h>

int main(){
    int t, c, sq, s;
    scanf("%d", &t);
    while(t--){
        c = 0;
        sq = 0;
        scanf("%d", &c);
        while(c){
            s = (int) sqrt(c);
            c -= s*s;
            sq++;
        }
        printf("%d\n", sq);
    }
}