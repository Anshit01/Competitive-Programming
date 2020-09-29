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
using namespace std;

void dfs(vector<vector<int>>& tree, int node, int parent, long double prob, vector<long double>& ans){
    if(tree[node].size() > 1 || (tree[node].size() == 1 && parent == 0)){
        ans[node] = 0;
        int n = tree[node].size();
        f(i, 0, n){
            if(tree[node][i] != parent){
                long double prob_dist;
                if(parent == 0){
                    prob_dist = prob / n;
                }else{
                    prob_dist = prob / (n-1);
                }
                dfs(tree, tree[node][i], node, prob_dist, ans);
            }
        }
    }else{
        ans[node] = prob;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<int>> tree(n+1, vector<int>());
    f(i, 1, n){
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    vector<long double> ans(n+1);
    dfs(tree, 1, 0, 1, ans);
    f(i, 1, n+1){
        cout << fixed << setprecision(10) << ans[i] << ' ';
    }
    cout << endl;
}