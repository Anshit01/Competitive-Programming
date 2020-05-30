#include <stdio.h>

int main(){
    int t, n, pmax, a, b, r, area;
    scanf("%d", &t);
    while(t--){
        int areamax = 0;
        scanf("%d%d", &n, &pmax);
        while(n--){

            scanf("%d%d%d", &a, &b, &r);
            area = a*b;
            if(r<=pmax && area > areamax){
                areamax = area;
            }
        }
        if(areamax == 0){
            printf("no tablet\n");
        }
        else{
            printf("%d\n", areamax);
        }
    }
}