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
        int i5 = 0, i7 = 0;
        bool flag = false;
        while(i5 * 5 <= n){
            i7 = 0;
            while(i5 * 5 + i7 * 7 <= n){
                if((n - i5*5 - i7*7) % 3 == 0){
                    cout << (n - i5*5 - i7*7)/3 << ' ' << i5 << ' ' << i7 << endl;
                    flag = true;
                    break;
                }
                i7++;
            }
            if(flag){
                break;
            }
            i5++;
        }
        if(!flag){
            cout << -1 << endl;
        }
    }
}