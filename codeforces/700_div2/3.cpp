/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

int get(int i, vector<int>& arr){
    if(arr[i] != -1){
        return arr[i];
    }
    cout << "? " << i << endl;
    cout.flush();
    int a;
    cin >> a;
    arr[i] = a;
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n+1, -1);
    auto get = [&arr, &n] (int i) -> int {
        if(i == 0){
            return INT32_MAX;
        }
        if(i == n+1){
            return INT32_MAX;
        }
        if(arr[i] != -1){
            return arr[i];
        }
        cout << "? " << i << endl;
        cout.flush();
        int a;
        cin >> a;
        arr[i] = a;
        return a;
    };
    int l = 1, r = n;
    int mid;
    while(l <= r){
        mid = (l+r)/2;
        if(get(mid) < get(mid-1) && get(mid) < get(mid+1)){
            cout << "! " << mid << endl;
            return;
        }
        if(get(mid-1) < get(mid)){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    assert(false);
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}