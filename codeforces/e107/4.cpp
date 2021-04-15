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
    int n, k;
    cin >> n >> k;
    set<string> pairs;
    string s = "  ";
    f(i, 0, k){
        f(j, 0, k){
            s[0] = 'a' + i;
            s[1] = 'a' + j;
            pairs.insert(s);
        }
    }
    string rep = "aa";
    pairs.erase("aa");
    f(i, 1, k){
        string pr({'a'+i, 'a'+i});
        rep += pr;
        pairs.erase(pr);
        pairs.erase(string({'a'+i-1, 'a'+i}));
    }
    while(!pairs.empty()){
        s = *pairs.begin();
        if(rep.back() == s[0]){
            rep.push_back(s[1]);
        }else{
            string sm({rep.back(), s[0]});
            rep += s;
            pairs.erase(sm);
        }
        pairs.erase(s);
    }
    int r = n/rep.size();
    string ans = "";
    f(i, 0, r){
        ans += rep;
    }
    int j = 0;
    f(i, r*rep.size(), n){
        ans += rep[j];
        j++;
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