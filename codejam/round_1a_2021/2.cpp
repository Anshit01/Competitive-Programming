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
    vector<int> a;
    int sum = 0;
    f(i, 0, n){
        int p, c;
        cin >> p >> c;
        sum += p*c;
        f(i, 0, c){
            a.push_back(p);
        }
    }
    sort(a.begin(), a.end());
    int ans = 0;
    do{
        int si = sum;
        int product = 1;
        f(i, 0, a.size()){
            si -= a[i];
            product *= a[i];
            if(si == product){
                ans = max(ans, si);
                break;
            }else if(si < product){
                break;
            }
        }
    }while(next_permutation(a.begin(), a.end()));
    cout << ans << endl;
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