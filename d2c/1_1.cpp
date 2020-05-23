#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

bool isPowerOfTwo(int n) {
    if(n < 1) return false;
    while(n > 1){
        if(n % 2 != 0){
            return false;
        }
        n /= 2;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    int n, l;
    cin >> n >> l;
    int a;
    int m;
    int count_n = 0;
    f(i, 0, n){
        cin >> a;
        if(a==n) count_n++;
        if(i+1 == l){
            m = a;
        }
    }
    if(isPowerOfTwo(n)){
        if(m == n){
            cout << n-count_n << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    else{
        cout << 0 << endl;
    }
    
}