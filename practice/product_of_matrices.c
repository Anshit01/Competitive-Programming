#include <stdio.h>

int main(){
    int k, l, m, n, sum;
    int a1[100][100], a2[100][100], a3[100][100];
    printf("Enter dimensions of first matrix\n");
    scanf("%d%d", &k, &l);
    printf("Enter dimentions of second matrix:\n");
    scanf("%d%d", &m, &n);
    if(l != m){
        printf("Invalid\n");
        return 0;
    }
    printf("Enter elements of first array:\n");
    for(int i = 0; i < k; i++){
        for(int j = 0; j < l; j++){
            scanf("%d", &a1[i][j]);
        }
    }
    printf("Enter elements of second array:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a2[i][j]);
        }
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            sum = 0;
            for(int x = 0; x < l; x++){
                sum += a1[i][x] * a2[x][j];
            }
            a3[i][j] = sum;
        }
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a3[i][j]);
        }
        printf("\n");
    }
}