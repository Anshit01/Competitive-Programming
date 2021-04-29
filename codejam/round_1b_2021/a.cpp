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
    int in[3];
    int tick = 72 * 1e10;
    f(i, 0, 3){
        cin >> in[i];
    }
    int ha, ma, sa;
    f(i, -720, 721){
        f(i, 0, 3){
            if(in[i] % tick == 0){
                sa = in[i]/tick;
                f(j, 0, 3){
                    if(i != j){
                        ma = in[j]/tick;
                        int rem = in[j] % tick;
                        int tick1 = 12 * 1e9;
    
                        if(rem % tick1 == 0 && rem / tick1 == sa){
                            f(k, 0, 3){
                                if(k != i && k != j){
                                    ha = in[k] / (tick * 5);
                                    cout << ha << ' ' << ma << ' ' << sa << ' ' << 0 << endl;
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "0 0 0 0" << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    f(t, 1, T+1){
        cout << "Case #" << t << ": ";
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}