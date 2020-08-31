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
    int n;
    cin >> n;
    int nn = 1 << n;
    vector<int> arr({nn});
    int diff = 1 << (n-1);
    f(i, 0, n){
        int l = arr.size();
        f(i, 0, l){
            arr.push_back(arr[i] - diff);
        }
        diff /= 2;
    }
    vector<ll> in(nn);
    inputArray(in);
    f(i, 0, nn){
        cout << in[arr[i] - 1] << ' ';
    }
    cout << endl;
}