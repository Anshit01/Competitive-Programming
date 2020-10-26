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
        if(n == 1){
            cout << 1 << endl;
        }else if(n == 2){
            cout << 2 << endl;
            cout << 1 << ' ' << 2 << endl;
        }else{
            cout << 2 << endl;
            cout << n << ' ' << n-2 << endl;
            cout << n-1 << ' ' << n-1 << endl;
            n--;
            while(n != 2){
                cout << n - 2 << ' ' << n << endl;
                n--;
            }
        }
    }
}