/* *>>>>> anshit01 <<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    sort(arr.begin(), arr.end());
    vector<pair<int, int>> acnt;
    for(int i = 0; i < n; i++){
        if(i == 0 || (arr[i] != arr[i-1])){
            int cnt = upper_bound(arr.begin(), arr.end(), arr[i]) - lower_bound(arr.begin(), arr.end(), arr[i]);
            acnt.push_back({arr[i], cnt});
        }
    }
    int ans = INT64_MAX;
    for(int s = 0; s < acnt.size(); s++){
        int d = 0;
        int l = s-1;
        int r = s+1;
        while(l >= 0 || r < acnt.size()){
            int ld = INT64_MAX, rd = INT64_MAX;
            if(l >= 0){
                ld = arr[(r-1)] - arr[l];
            }
            if(r < acnt.size()){
                rd = arr[r] - arr[l+1];
            }
            if(ld < rd){
                d += ld;
                l--;
            }else{
                d += rd;
                r++;
            }
        }
        ans = min(ans, d);
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}