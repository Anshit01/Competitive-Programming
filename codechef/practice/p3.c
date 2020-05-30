#include <stdio.h>
#include <math.h>

int main(){
    int t, ix, iy, a, b, c;
    double d1, d2, d3, dmin;
    int ax[5000], ay[5000], bx[5000], by[5000], cx[5000], cy[5000];
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d%d", &ix, &iy, &a, &b, &c);
        for(int i = 0; i < a; i++){
            scanf("%d%d", &ax[i], &ay[i]);
        }
        for(int i = 0; i < b; i++){
            scanf("%d%d", &bx[i], &by[i]);
        }
        for(int i = 0; i < c; i++){
            scanf("%d%d", &cx[i], &cy[i]);
        }
        for(int i = 0; i < a; i++){
            d1 = sqrt( ( (ix-ax[i])*(ix-ax[i]) ) + ( (iy-ay[i])*(iy-ay[i]) ) );
            for(int j = 0; j < b; j++){
                d2 = sqrt( ( (bx[j]-ax[i])*(bx[j]-ax[i]) ) + ( (by[j]-ay[i])*(by[j]-ay[i]) ) );
                for(int k = 0; k < c; k++){
                    d3 = sqrt( ( (bx[j]-cx[k])*(bx[j]-cx[k]) ) + ( (by[j]-cy[k])*(by[j]-cy[k]) ) );
                    if(i == 0 && j == 0 && k == 0){
                        dmin = d1 + d2 + d3;
                    }
                    else if(dmin > d1+d2+d3){
                        dmin = d1 + d2 + d3;
                    }
                }
            }
        }
        for(int i = 0; i < b; i++){
            d1 = sqrt( ( (ix-bx[i])*(ix-bx[i]) ) + ( (iy-by[i])*(iy-by[i]) ) );
            for(int j = 0; j < a; j++){
                d2 = sqrt( ( (bx[j]-ax[i])*(bx[j]-ax[i]) ) + ( (by[j]-ay[i])*(by[j]-ay[i]) ) );
                for(int k = 0; k < c; k++){
                    d3 = sqrt( ( (ax[j]-cx[k])*(ax[j]-cx[k]) ) + ( (ay[j]-cy[k])*(ay[j]-cy[k]) ) );
                    if(dmin > d1+d2+d3){
                        dmin = d1 + d2 + d3;
                    }
                }
            }
        }
        printf("%0.9f\n", dmin);
    }
}