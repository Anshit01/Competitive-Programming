#include <stdio.h>

int main()
{
    int arr[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int t = 0, a = 0, b = 0, sum = 0, res = 0;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &a, &b);
        sum = a + b;
        while(sum > 0){
            a = sum % 10;
            sum /= 10;
            res += arr[a];
        }
        printf("%d\n", res);
        res = 0;
    }
}