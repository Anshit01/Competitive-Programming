/* *>>>>> anshit01 <<<<<* */
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
    vector<int> arr(n);
    inputArray(arr);
    vector<int> armn(n), armx(n);
    priority_queue<int> qmx;
    priority_queue<int, vector<int>, greater<int>> qmn;
    f(i, 0, n){
        if(i == 0 || arr[i] != arr[i-1]){
            armn[i] = armx[i] = arr[i];
            int j = 1;
            if(i != 0) j = arr[i-1]+1;
            for(; j < arr[i]; j++){
                qmx.push(j);
                qmn.push(j);
            }
        }else{
            armn[i] = qmn.top();
            qmn.pop();
            armx[i] = qmx.top();
            qmx.pop();
        }
    }
    printArray(armn);
    printArray(armx);
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}