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
        vector<int> arr(n+1, 0);
        vector<int> in(n);
        int a;
        f(i, 0, n){
            cin >> in[i];
            arr[in[i]]++;
        }
        bool flag = false;
        f(i, 0, n+1){
            if(arr[i] == 1){
                int ans;
                f(j, 0, n){
                    if(in[j] == i){
                        ans = j+1;
                        break;
                    }
                }
                cout << ans << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << -1 << endl;
        }
    }
}