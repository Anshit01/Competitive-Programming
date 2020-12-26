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

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int m;
        cin >> m;
        map<int, int> mp;
        int x, y;
        f(i, 0, m){
            cin >> x >> y;
            mp[y] = x;
        }
        int cnt = 0;
        while(!mp.empty()){
            pair<int, int> cur = *mp.begin();
            if(cur.first == cur.second){
                mp.erase(cur.first);
            }else{
                int st = cur.first;
                while(mp.find(cur.second) != mp.end()){
                    cnt++;
                    mp.erase(cur.first);
                    cur = *mp.find(cur.second);
                    if(cur.second == st){
                        cnt++;
                        break;
                    }
                }
                mp.erase(cur.first);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}