/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;
using namespace __gnu_pbds;


typedef tree<
pair<int, int>,
null_type,
less<pair<int, int>>,
rb_tree_tag,
tree_order_statistics_node_update>
indexed_set_min;


void solve() {
    int t = 0;
    int n;
    cin >> n;
    vector<int> arr(3*n);
    inputArray(arr);
    multiset<int, greater<int>> leftq;
    indexed_set_min rightq;
    int leftsum = 0, rightsum = 0;
    f(i, 0, n){
        leftq.insert(arr[i]);
        leftsum += arr[i];
    }
    f(i, n, 3*n){
        rightq.insert({arr[i], i});
    }
    f(i, 0, n){
        rightsum += (*rightq.find_by_order(i)).first;
    }

    int ans = leftsum - rightsum;
    f(i, n, 2*n){
        vector<pair<int, int>> debug;
        f(i, 0, rightq.size()){
            debug.push_back(*rightq.find_by_order(i));
        }
        int ri = rightq.order_of_key({arr[i], i});
        if(ri < n){
            rightsum += (*rightq.find_by_order(n)).first - arr[i];
            
        }
        rightq.erase({arr[i], i});
        auto last = leftq.rbegin();
        if(arr[i] > *last){
            leftsum += arr[i] - *last;
            leftq.erase(--leftq.end());
            leftq.insert(arr[i]);
        }
        int diff = leftsum - rightsum;
        ans = max(ans, diff);
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}