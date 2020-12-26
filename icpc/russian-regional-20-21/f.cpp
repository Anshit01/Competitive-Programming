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

struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2; 
    } 
}; 

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int x, y, u, v, a, b;
        unordered_map<pair<int, int>, int, hash_pair> mp;
        int cnt = 0;
        f(i, 0, n){
            cin >> x >> y >> u >> v;
            a = u - x;
            b = v - y;
            if(a == 0){
                b /= abs(b);
            } else if(b == 0){
                a /= abs(a);
            }else {
                int gcd = abs(__gcd(a, b));
                if(gcd != 0){
                    a /= gcd;
                    b /= gcd;
                }
            }
            if(mp.find({-a, -b}) != mp.end()){
                cnt += mp[{-a, -b}];
            }
            if(mp.find({a, b}) == mp.end()){
                mp[{a, b}] = 1;
            }else{
                mp[{a, b}]++;
            }
        }
        cout << cnt << endl;
    }
}