#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int reverse(int x){
    long long ans = 0;
    int len = 1;
    int divisor = 10;
    while(x / divisor != 0){
        len++;
        divisor *= 10;
    }
    divisor /= 10;
    int multiplier = 1;
    f(i, 0, len){
        ans += multiplier * (x/divisor);
        x %= divisor;
        divisor /= 10;
        multiplier *= 10;
    }
    if(ans > INT32_MAX or ans < INT32_MIN) ans = 0;
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    int num;
    cin >> num;
    cout << reverse(num) << endl;
}