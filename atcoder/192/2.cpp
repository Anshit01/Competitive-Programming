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
    cin >> s;
    int n = s.size();
    f(i, 0, n){
        if(i & 1){
            if(s[i] < 'A' || s[i] > 'Z'){
                return false;
            }
        }else{
            if(s[i] < 'a' || s[i] > 'z'){
                return false;
            }
        }
    }
    return true;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        // solve();
        if(solve())
        	cout << "Yes" << endl;
        else
        	cout << "No" << endl;
    }
    return 0;
}