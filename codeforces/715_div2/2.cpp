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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int tcnt = 0, mcnt = 0;
    f(i, 0, n){
        if(s[i] == 'M'){
            mcnt++;
        }else{
            tcnt++;
        }
    }
    if(tcnt != 2*mcnt){
        return false;
    }
    int tc = 0, mc = 0;
    f(i, 0, n){
        if(s[i] == 'M'){
            mc++;
        }else{
            tc++;
        }
        if(mc > tc){
            return false;
        }
    }
    tc = 0;
    mc = 0;
    f(i, n, 0){
        if(s[i] == 'M'){
            mc++;
        }else{
            tc++;
        }
        if(mc > tc){
            return false;
        }
    }
    return true;
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