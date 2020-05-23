#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

inline bool iseven(int n){
    return !(n%2);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int k;
        cin >> k;
        if(iseven(n) && !iseven(k) && n/2 >= k){
            cout << "YES" << endl;
            f(i, 0, k-1){
                cout << 2 << ' ';
            }
            cout << n - (k-1)*2 << endl;
        }else if((n >= k) && ((iseven(n) && iseven(k)) || (!iseven(n) && !iseven(k)))){
            cout << "YES" << endl;
            f(i, 0, k-1){
                cout << 1 << ' ';
            }
            cout << n - k + 1 << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}