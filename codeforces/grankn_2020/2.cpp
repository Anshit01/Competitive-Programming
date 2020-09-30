/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
//#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> arr(n);
        inputArray(arr);
        int c = 1;
        f(i, 1, n){
            if(arr[i] != arr[i-1]){
                c++;
            }
        }
        if(k == 1 && c > 1){
            cout << -1 << endl;
            continue;
        }
        int ans = 0;
        while(ans < 1000){
            int ki = 1, last_out = arr[0];
            vector<int> tmp = vector<int>(arr);
            tmp[0] = 0;
            f(i, 1, n){
                if(ki < k){
                    last_out = arr[i];
                    tmp[i] = 0;
                    if(last_out != arr[i-1]){
                        ki++;

                    }
                }else{
                    tmp[i] -= last_out;
                }
            }
            ans++;
            arr = tmp;
            bool flag = true;
            f(i, 0, n){
                if(arr[i]){
                    flag = false;
                }
            }
            if(flag){
                break;
            }
        }
        cout << ans << endl;

    }
}