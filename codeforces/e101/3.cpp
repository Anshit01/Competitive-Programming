/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
#define endl '\n'
using namespace std;

bool solve() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> h(n);
    inputArray(h);
    int lb = h[0], ub = h[0];
    for(int hi : h){
        if(ub >= hi && hi + k - 1 >= lb){
            ub = min(ub, hi + k - 1);
            lb = max(lb, hi);
            ub += k - 1;
            lb -= k - 1;
        }else{
            return false;
        }
    }
    if(lb == h[n-1] - k + 1){
        return true;
    }
    return false;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        if(solve()){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}