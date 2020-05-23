#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int m = *max(candies.begin(), candies.end());
    int len = candies.size();
    vector<bool> res(len);
    for(int i = 0; i < len; i++){
        if(candies[i] + extraCandies >= m){
            res[i] = true;
        }else{
            res[i] = false;
        }
    }
    return res;
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