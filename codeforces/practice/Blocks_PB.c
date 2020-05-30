#include <stdio.h>

int main(){
    int n, bcount = 0;
    char str[200], req;
    int arr[600], arrlen = 0;
    scanf("%d %s", &n, str);
    for(int i = 0; i < n; i++){
        if(str[i] == 'B'){
            bcount++;
        }
    }
    if(bcount == 0 || bcount == n){
        printf("0\n");
        return 0;
    }
    if(n % 2 == 0 && bcount % 2 == 1){
        printf("-1\n");
        return 0;
    }
    
    int i = 0;
    if(n % 2 == 1){
        if (bcount % 2 == 0)
        {
            req = 'W';
        }
        else
        {
            req = 'B';
        }
    }
    else
    {
        req = (str[0] == 'W') ? 'B' : 'W';
    }
    while(i < n-1){
        while(str[i] == req && i < n-1){
            i++;
        }
        str[i] = req;
        str[i + 1] = (str[i+1] == 'W')? 'B' : 'W';
        arr[arrlen] = i;
        arrlen++;
    }
    printf("%d\n", arrlen);
    for(i = 0; i < arrlen - 1; i++){
        printf("%d ", arr[i] + 1);
    }
    
    printf("\n");
}