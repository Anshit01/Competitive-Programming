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

bool solve() {
    string s;
    cin >> s;
    vector<int> arr(26, 0);
    for(char c : s){
        arr[c-'a']++;
    }
    int odds = 0;
    f(i, 0, 26){
        if(arr[i] % 2 == 1){
            odds++;
        }
    }
    if(odds <= 1 || s.size() % 2 == 1){
        return true;
    }
    return false;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        // solve();
        if(solve())
        	cout << "First" << endl;
        else
        	cout << "Second" << endl;
    }
    return 0;
}