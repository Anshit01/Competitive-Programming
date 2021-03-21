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
    int x, y;
    cin >> x >> y;
    int l = 0, r = 0, u = 0, d = 0;
    string s;
    cin >> s;
    for(char c : s){
        if(c == 'U') u++;
        else if(c == 'D') d++;
        else if(c == 'L') l++;
        else if(c == 'R') r++;
    }
    bool xok = false, yok = false;
    if(x > 0){
        if(r >= x){
            xok = true;
        }
    }else{
        if(l >= -x){
            xok = true;
        }
    }
    if(y > 0){
        if(u >= y){
            yok = true;
        }
    }else{
        if(d >= -y){
            yok = true;
        }
    }
    if(xok && yok){
        cout << "YES" << endl;
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