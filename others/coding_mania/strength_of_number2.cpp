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

void solve() {
    int l, r;
    cin >> l >> r;
    int fours = 0;
    int l12 = (l+6) / 12;
    int r12 = (r+6) / 12;
    fours = r12 - l12;
    if(l12 % 12 == 0) fours++;
    int odds = (r - l+1)/2;
    int evens = odds;
    if((r - l + 1) % 2 == 1){
        if(l % 2 == 0){
            evens++;
        }else{
            odds++;
        }
    }
    cout << 2*odds + 3*(evens - fours) + 4*fours << endl;
    // cout << odds << ' ' << evens << ' ' << fours << endl;
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