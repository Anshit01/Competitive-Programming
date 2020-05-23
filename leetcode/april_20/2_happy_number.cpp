#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool isHappy(int n) {
    long long sum = 0;
    if(n == 1){
        return true;
    }
    for(int i = 0; i < 100000; i++){
        while(n > 0){
            sum += (n%10) * (n%10);
            n /= 10;
        }
        if(sum == 1){
            return true;
        }
        n = sum;
        sum = 0;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}