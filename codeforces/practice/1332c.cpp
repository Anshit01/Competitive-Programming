/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
//#define int long long
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

void solve() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    string s;
    cin >> s;
    int ans = 0;
    f(i, 0, (k+1)/2){
        int t = n/k;
        vector<int> cnt(26, 0);
        for(int j = i; j < n; j += k){
            cnt[s[j] - 'a']++;
        }
        if(k % 2 != 1 || i != k/2){
            for(int j = k - i - 1; j < n; j += k){
                cnt[s[j] - 'a']++;
            }
            t *= 2;
        }
        int m = 0;
        for(int x : cnt){
            m = max(m, x);
        }
        ans += t - m;
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}