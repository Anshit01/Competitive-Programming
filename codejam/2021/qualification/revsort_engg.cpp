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

void solve() {
    int n;
    cin >> n;
    int c;
    cin >> c;
    c -= n-1;
    if(c < 0){
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    vector<int> rotate;
    vector<int> arr;
    f(i, 0, n){
        arr.push_back(i+1);
    }
    int i = n-1;
    while(c > 0){
        if(i > c){
            rotate.push_back(c);
            c = 0;
        }else{
            rotate.push_back(i);
            c -= i;
            i--;
        }
        if(i == 0 && c){
            cout << "IMPOSSIBLE" << endl;
            return;
        }
    }
    for(int& a : rotate){
        a++;
    }
    reverse(rotate.begin(), rotate.end());
    for(int l : rotate){
        reverse(arr.end() - l, arr.end());
    }
    printArray(arr);
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    f(t, 1, T+1){
        cout << "Case #" << t << ": ";
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}