#include <stdio.h>

int fact(int n){
    int f = 1;
    while(n > 1){
        f *= n;
        n--;
    }
    return f;
}

int main(){
    int t, n, s1, s2, a, res;
    char c;
    scanf("%d", &t);
    while(t--){
        res = s1 = s2 = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            c = getchar();
            a = (c == '1')? 1 : 0;
            if(a == 1){
                s1++;
            }
        }
        for(int i = 0; i < n; i++){
            c = getchar();
            a = (c == '1')? 1 : 0;
            if(a == 1){
                s2++;
            }
        }
        s1 = (s2>s1)? s1 + s2 - (s2 = s1) : s1;
        for(int i = s1 - s2; i <= n && i <= s1 + s2; i++){
            res += fact(n) / (fact(i) * fact(n-i));
            if(res >= 1000000007){
                res %= 1000000007;
            }
        }
        printf("%d", res);

    }
}
