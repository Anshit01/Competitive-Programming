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

bool isP(string s){
    int n = s.size();
    f(i, 0, (int)n/2){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}

void solve() {
    string s;
    cin >> s;
    if(isP('a'+s) == false){
        cout << "YES" << endl;
        cout << 'a'+ s << endl;
    }else if (isP(s + 'a') == false){
        cout << "YES" << endl;
        cout << s + 'a' << endl;
    }else{
        cout << "NO" << endl;
    }
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