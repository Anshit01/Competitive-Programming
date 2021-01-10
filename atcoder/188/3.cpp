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
    int n2 = 1 << n;
    vector<pair<int, int>> arr(n2);
    f(i, 0, n2){
        cin >> arr[i].first;
        arr[i].second = i+1;
    }
    while(arr.size() > 2){
        n2 /= 2;
        vector<pair<int, int>> a(n2);
        f(i, 0, n2){
            if(arr[2*i].first > arr[2*i + 1].first){
                a[i] = arr[2*i];
            }else{
                a[i] = arr[2*i + 1];
            }
        }
        arr = a;
    }
    if(arr[0].first < arr[1].first){
        cout << arr[0].second << endl;
    }else{
        cout << arr[1].second << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    while(T--){
        solve();
    }
    return 0;
}