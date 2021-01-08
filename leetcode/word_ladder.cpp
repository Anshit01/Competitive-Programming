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

class Solution {

    bool isAdjacent(string& a, string& b){
        int cntDiff = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] != b[i]){
                cntDiff++;
            }
        }
        return (cntDiff == 1);
    }

    int shortestPath(vector<vector<int>>& adj, int start, int end, vector<bool>& visited){
        int level = 0;
        queue<pair<int, int>> q;
        q.push({start, 1});
        visited[start] = true;
        while(!q.empty()){
            auto pr = q.front();
            q.pop();
            int v = pr.first;
            int level = pr.second + 1;
            for(int a : adj[v]){
                if(!visited[a]){
                    if(a == end){
                        return level;
                    }
                    q.push({a, level});
                    visited[a] = true;
                }
            }
        }
        return 0;
    }

public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        wordList.push_back(beginWord);
        int n = wordList.size();
        vector<bool> visited(n, false);
        vector<vector<int>> adj(n, vector<int>());
        int start = n-1;
        int end = -1;
        for(int i = 0; i < n; i++){
            if(endWord == wordList[i]){
                end = i;
            }
            for(int j = i+1; j < n; j++){
                if(isAdjacent(wordList[i], wordList[j])){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        if(end == -1){
            return 0;
        }
        return shortestPath(adj, start, end, visited);
    }
};

void solve() {
    int n;
    string start, end;
    cin >> start >> end;
    cin >> n;
    vector<string> dict(n);
    f(i, 0, n){
        cin >> dict[i];
    }
    Solution sol;

    cout << sol.ladderLength(start, end, dict) << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}