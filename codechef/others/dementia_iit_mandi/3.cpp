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

struct Circle{
    ll x, y, r;
    Circle(ll a, ll b, ll rad){
        x = a;
        y = b;
        r = rad;
    }
};

int32_t dist(ll x1, ll y1, ll x2, ll y2){
    ll sq = (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);
    ll ans = sqrt(sq);
    if(ans * ans == sq){
        return ans;
    }
    return 0;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        map<pair<int, int>, set<int>> ds;
        vector<Circle> circles;
        set<pair<pair<int, int>, int>> circleSet;
        int x, y, r;
        f(i, 0, n){
            cin >> x >> y >> r;
            auto cir = Circle(x, y, r);
            if(circleSet.find({{x, y}, r}) == circleSet.end()){
                circles.push_back(Circle(x, y, r));
                circleSet.insert({{x, y}, r});
            }
            if(ds.find({x, y}) == ds.end()){
                ds[{x, y}] = {r};
            }else{
                ds[{x, y}].insert(r);
            }
        }
        int ans = 0;
        int n1 = circles.size();
        f(i, 0, n1){
            auto c1 = circles[i];
            f(j, 0, n1){
                auto c2 = circles[j];
                int d = dist(c1.x, c1.y, c2.x, c2.y);
                if(i!=j && d % 2 == 0 && d > c1.r && d > c2.r && c1.r + c2.r > r){
                    if((c1.x - c2.x) % 2 == 0 && (c1.y - c2.y) % 2 == 0){
                        int x = (c1.x + c2.x)/2;
                        int y = (c1.y + c2.y)/2;
                        if(ds.find({x, y}) != ds.end()){
                            auto st = ds.find({x, y})->second;
                            if(st.find(d/2) != st.end()){
                                ans++;
                            }
                        }
                    }
                }

            }

        }
        cout << ans << endl;
    }
}