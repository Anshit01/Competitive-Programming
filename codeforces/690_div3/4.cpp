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
#define endl '\n'
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int mx = 0;
        int sum = 0;
        f(i, 0, n){
            cin >> arr[i];
            mx = max(mx, arr[i]);
            sum += arr[i];
        }
        int k = mx;
        int ans = n-1;
        int s = 0;
        while(k < sum){
            if(sum % k == 0){
                s = 0;
                f(i, 0, n){
                    s += arr[i];
                    if(s > k){
                        break;
                    }else if(s == k){
                        s = 0;
                    }
                }
                if(s == 0){
                    ans = n - sum / k;
                    break;
                }
            }    
            k++;
        }
        cout << ans << endl;
    }
}