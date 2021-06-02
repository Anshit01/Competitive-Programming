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
    int m;
    cin >> m;
    string s;
    cin >> s;
    vector<int> pos;
    
    f(i, 0, n){
        if(s[i] == '1'){
            pos.push_back(i);
        }
    }
    if(pos.empty()){
        cout << s << endl;
        return;
    }
    f(i, 1, m+1){
        if(pos[0] - i >= 0){
            s[pos[0] - i] = '1';
        }else{
            break;
        }
    }
    f(i, 1, m+1){
        if(pos.back() + i < n){
            s[pos.back() + i] = '1';
        }else{
            break;
        }
    }
    f(i, 0, (int)pos.size()-1){
        int d = (pos[i+1] - pos[i] - 1)/2;
        for(int j = 1; j <= m && j <= d; j++){
            s[pos[i] + j] = '1';
            s[pos[i+1] - j] = '1';
        }
    }
    cout << s << endl;
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