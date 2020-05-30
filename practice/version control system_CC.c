#include <stdio.h>

int main(){
    int t, total, ignored, tracked, a, b;
    scanf("%d", &t);
    while(t--){
        a = 0;
        b = 0;
        scanf("%d%d%d", &total, &ignored, &tracked);
        int arr_ig[ignored], arr_tr[tracked];
        for(int i = 0; i < ignored; i++){
            scanf("%d", &arr_ig[i]);
        }
        for(int i = 0; i < tracked; i++){
            scanf("%d", &arr_tr[i]);
        }
        for(int i = 0, ig = 0, tr = 0; i < total;){
            if(arr_ig[ig] == i+1 && arr_tr[tr] == i+1){
                a++;
            }
            else if(arr_ig[ig] != i+1 && arr_tr[ig] != i+1){
                b++;
            }
            if(arr_ig[ig] <= i+1){
                ig++;
            }
            if(arr_tr[ig] <= i+1){
                tr++;
            }
            if(arr_tr[tr] == i+1 || arr_ig[ig] == i+1){
                i++;
            }

        }
        printf("%d %d\n", a, b);
    }
}