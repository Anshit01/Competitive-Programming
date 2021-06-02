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
    string sin;
    cin >> sin;
    vector<int> cnt(26, 0);
    int n = sin.size();
    vector<int> s(n);
    string ans;
    f(i, 0, n){
        s[i] = sin[i] - 'a';
        cnt[s[i]]++;
    }
    vector<int> cnti(26, 0), cntmi(26, 0);
    int mi = 0;
    f(i, 0, n){
        cnti[s[i]]++;
        if(cnt[s[i]] >= cnti[s[i]]){
            if(s[i] >= s[mi]){
                mi = i;
            }
        }
        if(cnt[s[i]] == cnti[s[i]]){
            if(cnti[s[mi]] < INT32_MAX){
                ans.push_back(s[mi] + 'a');
                cnt[s[mi]] = INT32_MAX;
            }
            if(s[i] != s[mi]){
                ans.push_back(s[i] + 'a');
                cnt[s[i]] = INT32_MAX;
            }
            mi = i+1;
        }
    }
    std::cout << ans << endl;
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