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

int depth(map<string, vector<string>>& tree, string root){
    int d = 0;
    for(string s : tree[root]){
        d = max(d, depth(tree, s));
    }
    return d+1;
}

void solve() {
    int n;
    cin >> n;
    map<string, vector<string>> tree;
    string a, b, c;
    f(i, 0, n){
        cin >> a >> b >> c;
        for(char& x : a){
            x = tolower(x);
        }
        for(char& x : c){
            x = tolower(x);
        }
        if(tree.find(c) != tree.end()){
            tree[c] = vector<string>({a});
        }else{
            tree[c].push_back(a);
        }
    }
    cout << depth(tree, "polycarp") << endl;
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