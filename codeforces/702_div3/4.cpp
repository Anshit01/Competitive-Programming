/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

void setDepth(vector<pair<int, int>>& a, int l, int r, int curDepth){
    int maxi = l;
    f(i, l+1, r+1){
        if(a[i].first > a[maxi].first){
            maxi = i;
        }
    }
    a[maxi].second = curDepth;
    if(maxi > l){
        setDepth(a, l, maxi-1, curDepth+1);
    }
    if(maxi < r){
        setDepth(a, maxi+1, r, curDepth+1);
    }
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    f(i, 0, n){
        cin >> a[i].first;
    }
    setDepth(a, 0, n-1, 0);
    f(i, 0, n){
        cout << a[i].second << ' ';
    }
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}