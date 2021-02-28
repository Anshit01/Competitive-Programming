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

bool solve() {
    string s;
    vector<int> cnt(26, 0);
    cin >> s;
    for(auto c : s){
        cnt[c-'a']++;
    }
    int pairs = 0, singles = 0;
    f(i, 0, 26){
        singles += cnt[i] % 2;
        pairs += cnt[i] / 2;
    }
    if(singles <= pairs){
        return true;
    }
    return false;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        // solve();
        if(solve())
        	cout << "YES" << endl;
        else
        	cout << "NO" << endl;
    }
    return 0;
}