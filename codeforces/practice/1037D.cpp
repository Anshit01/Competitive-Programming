/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define int long long
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

int solve() {
    int n;
    cin >> n;
    vector<bool> visited(n+1, false);
    vector<unordered_set<int>> tree(n+1, unordered_set<int>());
    int a, b;
    f(i, 1, n){
        cin >> a >> b;
        tree[a].insert(b);
        tree[b].insert(a);
    }
    vector<int> seq(n);
    f(i, 0, n){
        cin >> seq[i];
    }
    int head = 1;
    visited[1] = true;
    queue<int> q;
    q.push(seq[0]);
    while(head < n){
        queue<int> q2;
        while(!q.empty()){
            int v = q.front();
            q.pop();
            unordered_set<int> childs;
            for(int a : tree[v]){
                if(!visited[a]){
                    childs.insert(a);
                }
            }
            if(childs.size() < tree[v].size() - 1){
                return 0;
            }
            f(i, 0, childs.size()){
                if(!visited[seq[head]] && childs.find(seq[head]) != childs.end()){
                    q2.push(seq[head]);
                    visited[seq[head]] = true;
                    head++;
                }else{
                    return 0;
                }
            }

        }
        q = q2;
    }
    return 1;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    while(T--){
        if(solve()){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}