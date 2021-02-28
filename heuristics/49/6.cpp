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
    vector<int> arr(3*n);
    inputArray(arr);
    priority_queue<int, vector<int>, greater<int>> leftq;
    multiset<int, greater<int>> rightq;
    multiset<int> rightbuf;
    int leftsum = 0, rightsum = 0;
    f(i, 0, n){
        leftq.push(arr[i]);
        leftsum += arr[i];
    }
    vector<int> rightarr(arr.begin()+n, arr.end());
    sort(rightarr.begin(), rightarr.end());
    f(i, 0, n){
        rightq.insert(rightarr[i]);
        rightsum += rightarr[i];
    }
    f(i, n, 2*n){
        rightbuf.insert(rightarr[i]);
    }
    int ans = leftsum - rightsum;
    f(i, n, 2*n){
        if(leftq.top() < arr[i]){
            leftsum += arr[i] - leftq.top();
            leftq.pop();
            leftq.push(arr[i]);
        }
        if(*rightq.begin() >= arr[i]){
            rightsum += *rightbuf.begin() - arr[i];
            rightq.erase(rightq.lower_bound(arr[i]));
            rightq.insert(*rightbuf.begin());
            rightbuf.erase(rightbuf.begin());
        }else{
            rightbuf.erase(rightbuf.lower_bound(arr[i]));
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