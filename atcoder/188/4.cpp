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

void solve() {
    int n;
    cin >> n;
    int c;
    cin >> c;
    map<int, int> start, end;
    int s, e, ci;
    f(i, 0, n){
        cin >> s >> e >> ci;
        if(start.find(s) == start.end()){
            start[s] = ci;
        }else{
            start[s] += ci;
        }
        if(end.find(e) == end.end()){
            end[e] = ci;
        }else{
            end[e] += ci;
        }
    }
    int ans = 0;
    int cur = 0;
    int prev = 0;
    while(!end.empty()){
        int i = min((start.empty())? INT32_MAX : start.begin()->first, end.begin()->first);
        int day = 0;
        ans += (i - prev - 1) * min(cur, c);
        if(start.find(i) != start.end()){
            cur += start[i];
            start.erase(i);
        }
        ans += min(cur, c);
        prev = i;
        if(end.find(i) != end.end()){
            cur -= end[i];
            end.erase(i);
        }
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
    }
    return 0;
}