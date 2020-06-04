/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

class Solution {
public:
    static bool compare(vector<int> cost1, vector<int> cost2){
    if(abs(cost1[0] - cost1[1]) > abs(cost2[0] - cost2[1])){
        return true;
    }
    return false;
}

int twoCitySchedCost(vector<vector<int>>& costs) {
    int n = costs.size();
    sort(costs.begin(), costs.end(), compare);
    int city1 = 0, city2 = 0;
    int cost = 0;
    for(int i = 0; i < n; i++){
        if(city1 == n/2){
            cost += costs[i][1];
        }
        if(city2 == n/2){
            cost += costs[i][0];
        }
        if(city1 != n/2 && city2 != n/2){
            if(costs[i][0] > costs[i][1]){
                city2++;
                cost += costs[i][1];
            }else{
                city1++;
                cost += costs[i][0];
            }
        }
    }
    return cost;
}
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}