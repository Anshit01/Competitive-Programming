/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n, m;
    cin >> T;
    while(T--){
        cin >> n >> m;
        vector<int> p(n), h(n);
        f(i, 0, n){
            cin >> p[i];
        }
        f(i, 0, n){
            cin >> h[i];
        }
        vector<vector<int>> graph(n, vector<int>());
        int a, b;
        f(i, 1, n){
            cin >> a >> b;
            graph[a-1].push_back(b-1);
        }
        
        vector<pair<int, int>> stac;
        stac.push_back({0, -1});
        int cursor = 0;
        while(cursor < stac.size()){
            int curlen = stac.size();
            while(cursor < curlen){
                for(int cityi : graph[cursor]){
                    stac.push_back({cityi, cursor});
                }
                cursor++;
            }
        }
        vector<int> sumDiff(n, 0);
        bool flag = true;
        while(!stac.empty()){
            int curCity = stac.back().first;
            int parentCity = stac.back().second;
            int hi = h[curCity];
            int pi = p[curCity];
            if(hi > pi || hi < -pi){
                flag = false;
                break;
            }
            if(pi %2 == 0){
                if(hi % 2 == 1){
                    flag = false;
                    break;
                }
            }
            if(pi % 2 == 1){
                if(hi % 2 == 0){
                    flag = false;
                    break;
                }
            }
            if(pi-hi < pi - sumDiff[curCity]){
                flag = false;
                break;
            }
            if(parentCity == -1){
                break;
            }
            p[parentCity] += pi;
            sumDiff[parentCity] += hi;
            stac.pop_back();

        }

        if(flag){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}