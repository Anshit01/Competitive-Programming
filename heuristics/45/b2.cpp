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

// bool check(vector<int>& a, vector<int>& cost, int m, ){

// }

void solve() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    string s;
    cin >> s;
    vector<int> a(n);
    f(i, 0, n){
        a[i] = s[i] - 'a';
    }
    vector<int> cost(26);
    inputArray(cost);

    auto check = [&] (int l) {
        vector<int> cnt(26, 0);
        f(i, 0, l){
            cnt[a[i]]++;
        }
        
        return true;
    };

    int l = 1, r = n, mid, ans = 0;
    while(l <= r){
        mid = (l+r)/2;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout << ans << endl;
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