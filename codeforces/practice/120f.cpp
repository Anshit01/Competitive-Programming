/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
//#define int long long
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

int depth(const vector<vector<int>>& tree, int root, int parent){
    if((parent == 0 && tree[root].empty()) || (parent != 0 && tree[root].size() == 1)) return 0;
    int d = 0;
    for(int a : tree[root]){
        if(a != parent){
            d = max(d, depth(tree, a, root));
        }
    }
    return d + 1;
}

void solve() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int ni;
        in >> ni;
        vector<vector<int>> tree(ni+1, vector<int>());
        int a, b;
        f(j, 1, ni){
            in >> a >> b;
            tree[a].push_back(b);
            tree[b].push_back(a);
        }
        int d = 0;
        f(j, 1, ni+1){
            d = max(d, depth(tree, j, 0));
        }
        sum += d;
    }

    out << sum << endl;
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