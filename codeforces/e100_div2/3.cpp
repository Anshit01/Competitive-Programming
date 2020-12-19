/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define int long long
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
        vector<pair<int, int>> arr(n+1);
        f(i, 0, n){
            cin >> arr[i].first >> arr[i].second;
        }
        int ans = 0;
        arr[n] = {INT64_MAX, 0};
        int ts = 0, te = 0;
        int ds = 0, de = 0;
       
        f(i, 0, n){
            if(arr[i].first >= te){
                ds = de;
                de = arr[i].second;
                ts = arr[i].first;
                te = ts + abs(ds - de);
                if(arr[i+1].first - ts >= abs(ds - de)){
                    ans++;
                }
            }else{
                int ti = ts + abs(arr[i].second - ds);
                if((arr[i].second <= de && arr[i].second >= (ds + arr[i].first - ts)) && arr[i].first + abs(arr[i].second ) || (arr[i].second >= de && arr[i].second <= (ds - arr[i].first + ts))){
                    if(ti <= arr[i+1].first){
                        ans++;
                    }
                }
            }

        }
        cout << ans << endl;
    }
}