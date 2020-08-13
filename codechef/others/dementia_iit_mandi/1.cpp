/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
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
        int n;
        cin >> n;
        vector<int> arr(n);
        inputArray(arr);
        sort(begin(arr), end(arr), greater<int>());
        int p1 = 0, p2 = 0;
        f(i, 0, n){
            if(i == 0){
                p1 += arr[i];
            }else if(i == 1 || i == 2){
                p2 += arr[i];
            }else if(i % 2 == 1){
                p1 += arr[i];
            }else{
                p2 += arr[i];
            }
        }
        if(p1 == p2){
            cout << "draw" << endl;
        }else if(p1 < p2){
            cout << "second" << endl;
        }else{
            cout << "first" << endl;
        }
    }
}