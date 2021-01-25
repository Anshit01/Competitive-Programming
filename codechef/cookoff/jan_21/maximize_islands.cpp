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

void solve() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<string> mat(n);
    f(i, 0, n){
        cin >> mat[i];
    }
    int as = 0, ad = 0, bs = 0, bd = 0;
    f(i, 0, n){
        f(j, 0, m){
            if((i+j)% 2 == 0){
                if(mat[i][j] == '*'){
                    as++;
                }else{
                    ad++;
                }
            }else{
                if(mat[i][j] == '*'){
                    bs++;
                }else{
                    bd++;
                }
            }
        }
    }
    int bt = n*m/2;
    int at = (n*m) - bt;
    int a = n*m - as - bd;
    int b = n*m - ad - bs;
    if((n*m) % 2 == 0){
        cout << min(a, b) << endl;
    }else{
        cout << a << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}