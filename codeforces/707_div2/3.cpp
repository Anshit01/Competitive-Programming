/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
// #define int long long
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
    vector<pair<int, int>> sumPairs(5 * 1e6 + 5, {-1, -1});
    f(i, 0, n){
        f(j, i+1, n){
            int curSum = arr[i] + arr[j];
            if(sumPairs[curSum].first == -1){
                sumPairs[curSum] = {i, j};
            }else{
                auto pr = sumPairs[curSum];
                if(i != pr.first && j != pr.second && i != pr.second && j != pr.first){
                    cout << "YES" << endl;
                    cout << i+1 << ' ' << j+1 << ' ' << pr.first+1 << ' ' << pr.second+1 << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
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