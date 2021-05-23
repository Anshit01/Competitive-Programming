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

struct Node {
    Node* zero = nullptr;
    Node* one = nullptr;
};

int insert(Node* node, string s, int i){
    if(i == s.size()){
        return 0;
    }
    if(s[i] == '1'){
        if(node->one == nullptr){
            node->one = new Node();
            return insert(node->one, s, i+1) + 1;
        }else{
            return insert(node->one, s, i+1);
        }
    }else{
        if(node->zero == nullptr){
            node->zero = new Node();
            return insert(node->zero, s, i+1) + 1;
        }else{
            return insert(node->zero, s, i+1);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    f(i, 0, n){
        cin >> arr[i];
    }
    int ans = 0;
    auto trie = new Node();
    f(i, 0, n){
        ans += insert(trie, arr[i], 0);
    }
    cout << ans << endl;
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