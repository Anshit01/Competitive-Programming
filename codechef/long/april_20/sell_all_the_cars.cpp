#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll arr[n];
        f(i, 0, n){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        ll sum = 0;
        int val;
        f(i, 0, n){
            val = arr[n-i-1] - i;
            if(val < 0) val = 0;
            sum += val;
            sum %= mod;
        }
        cout << sum << endl;
    }
}