/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<string, int>> arr;
    map<string, int> totalScores;
    f(i, 0, n){
        string s;
        int score;
        cin >> s >> score;
        arr.push_back({s, score});
        totalScores[s] += score;
    }
    int maxScore = 0;
    for(auto pr : totalScores){
        maxScore = max(maxScore, pr.second);
    }
    map<string, int> scores;
    for(auto pr : arr){
        scores[pr.first] += pr.second;
        if(scores[pr.first] >= maxScore && totalScores[pr.first] == maxScore){
            cout << pr.first << endl;
            return;
        }
    }

}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}