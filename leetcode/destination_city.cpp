#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

string destCity(vector<vector<string>>& paths) {
    unordered_map<string, int> mp;
    int l = paths.size();
    for(int i = 0; i< l; i++){
        if(mp.find(paths[i][0]) == mp.end()){
            mp[paths[i][0]] = 1;
        } else{
            mp.erase(paths[i][0]);
        }
        if(mp.find(paths[i][1]) == mp.end()){
            mp[paths[i][1]] = 2;
        } else{
            mp.erase(paths[i][1]);
        }
    }
    for(auto pr : mp){
        if(pr.second == 2){
            return pr.first;
        }
    }
    return "";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}