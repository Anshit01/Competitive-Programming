/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
    vector<vector<pair<int, int>>> graph(n, vector<pair<int, int>>());
    for(vector<int> flight : flights){
        graph[flight[0]].push_back({flight[1], flight[2]});
    }
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> Q;
    Q.push({0, src, K+1});
    while(!Q.empty()){
        vector<int> top = Q.top();
        Q.pop();
        int cost = top[0];
        int node = top[1];
        int edges = top[2];
        if(node == dst){
            return cost;
        }
        if(edges > 0){
            for(auto f : graph[node]){
                Q.push({cost + f.second, f.first, edges - 1});
            }
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}