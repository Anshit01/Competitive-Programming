#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int tribonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    int n0 = 0, n1 = 1, n2 = 1;
    int tmp;
    for(int i = 3; i <= n; i++){
        int tmp1 = n2, tmp0 = n1;
        n2 += n1 + n0;
        n1 = tmp1;
        n0 = tmp0;
    }
    return n2;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << tribonacci(n) << endl;
    }
}