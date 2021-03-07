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

int solve() {
    int msn, mf;
    cin >> msn >> mf;
    int ms = msn + mf;
    if(ms >= 15 && mf >= 8){
        return 1;
    }else if(ms >= 10 && mf >= 3){
        return 2;
    }else if(ms >= 3){
        return 3;
    }else{
        return 4;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        cout << solve() << endl;
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}