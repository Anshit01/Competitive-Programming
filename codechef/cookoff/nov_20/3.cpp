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
        int a = 0, b = 0;
        f(i, 1, k+1){
            if(k % i == 0){
                int j = k/i;
                if(i + j < n){
                    a = i;
                    b = j;
                    break;
                }
            }
        }
        if(a == 0){
            cout << -1 << endl;
        }else{
            cout << n - 1 << endl;
            int mn = a+1;
            f(i, 1, a+1){
                cout << i << ' ' << mn << endl;
            }
            f(i, 1, n - a - b){
                cout << mn << ' ' << mn+1 << endl;
                mn++;
            }
            f(i, 1, b+1){
                cout << mn << ' ' << mn+i << endl;
            }
        }
    }
}