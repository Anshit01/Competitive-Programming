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
using namespace std;

ll weighti(vector<vector<int>>& gr, vector<ll>& weights, vector<ll>& money, int i, int p){
    if(weights[i] != 0){
        return weights[i];
    }
    if(gr[i].size() == 0){
        weights[i] = money[i];
        return money[i];
    }
    ll weight = money[i];
    for(int x : gr[i]){
        if(x != p)
            weight += weighti(gr, weights, money, x, i);
    }
    weights[i] = weight;
    return weight;
}


int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int u, v;
    vector<vector<int>> gr(n+1, vector<int>());
    f(i, 0, n-1){
        cin >> u >> v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    vector<ll> money(n+1);
    f(i, 1, n+1){
        cin >> money[i];
    }
    vector<ll> weights(n+1, 0);
    weighti(gr, weights, money, 1, 0);
    vector<pair<ll, int>> res(n);
    f(i, 1, n+1){
        res[i-1] = {weights[i], i};
    }
    sort(res.begin(), res.end());
    vector<ll> weightsSorted(n);
    f(i, 0, n){
        weightsSorted[i] = res[i].first;
    }
    int q;
    cin >> q;
    f(i, 0, q){
        ll a;
        cin >> a;
        int ind = upper_bound(weightsSorted.begin(), weightsSorted.end(), a) - weightsSorted.begin();
        if(ind != 0 && weightsSorted[ind - 1] == a){
            ind--;
        }
        if(ind == n){
            cout << -1 << '\n';
        }else {
            cout << res[ind].second << '\n';
        }
    }

}