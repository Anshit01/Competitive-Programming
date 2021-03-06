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
    int n;
    cin >> n;
    if(n % 2){
        bool win = true;
        f(i, 0, n){
            f(j, i+1, n){
                if(win)
                    cout << 1 << ' ';
                else
                    cout << -1 << ' ';
                win = !win;
            }
        }
    }else{
        f(i, 0, n-1){
            f(j, 0, n-i-1){
                if((i&1) == 0 && j == 0){
                    cout << 0 << ' ';
                }else{
                    if(j&1){
                        cout << 1 << ' ';
                    }else{
                        cout << -1 << ' ';
                    }
                }
            }
        }
    }
    cout << endl;
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