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
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        int a1;
        int b1;
        if(x > a-n){
            a1 = x;
            b1 = max(y, b -(n - (a-x)));
        }else{
            a1 = a-n;
            b1 = b;
        }
        int b2 = max(y, b-n);
        int a2;
        if(y > b-n){
            b2 = y;
            a2 = max(x, a - (n - (b-y)));
        }else{
            b2 = b-n;
            a2 = a;
        }
        int ans = min(a1*b1, a2*b2);
        cout << ans << '\n';
    }
}