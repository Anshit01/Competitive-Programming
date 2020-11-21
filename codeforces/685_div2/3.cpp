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
        string a, b;
        cin >> a >> b;
        map<char, int> amap, bmap;
        f(i, 'a', 'z' + 1){
            amap[(char)i] = 0;
            bmap[(char)i] = 0;
        }
        f(i, 0, n){
            amap[a[i]]++;
            bmap[b[i]]++;
        }
        bool ansyes = true;
        int bal = 0;
        f(c, 'a', 'z' + 1){
            if(amap[c] + bal >= bmap[c] && abs(amap[c] - bmap[c]) % k == 0){
                int diff = amap[c] + bal - bmap[c];
                amap[c] = bal - diff;
                bal = diff;
            }else{
                ansyes = false;
                break;
            }
        }
        cout << (ansyes ? "YES" : "NO") << endl;
    }
}