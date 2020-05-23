#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int maxProfit(vector<int>& prices) {
    int start = prices[0], profit = 0;
    int n = prices.size();
    for(int i = 1; i < n; i++){
        if(prices[i-1] > prices[i]){
            profit += prices[i-1] - start;
            start = prices[i];
        }
    }
    if(prices[n-1] > start){
        profit += prices[n-1] - start;
    }
    return profit;
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