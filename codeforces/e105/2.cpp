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

int prev(int i){
    return (i+3)%4;
}

int next(int i){
    return (i+1) % 4;
}



bool solve() {
    int n;
    cin >> n;
    vector<int> lim(4, n), a(4);
    inputArray(a);
    vector<bool> st(4, 0);
    f(i, 0, 4){
        if(a[i] == n){
            a[prev(i)]--;
            a[next(i)]--;
        }
    }
    f(i, 0, 4){
        if(a[i] == n-1){
            if(a[prev(i)] > a[next(i)]){
                a[prev(i)]--;
            }else{
                a[next(i)]--;
            }
        }
    }
    f(i, 0, 4){
        if(a[i] < 0){
            return false;
        }
    }
    return true;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        // solve();
        if(solve())
        	cout << "YES" << endl;
        else
        	cout << "NO" << endl;
    }
    return 0;
}