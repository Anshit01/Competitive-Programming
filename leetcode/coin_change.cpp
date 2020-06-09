/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    sort(coins.begin(), coins.end(), greater<int>());
    int count = 0;
    int i = 0, j = 0, n = coins.size();
    while(amount != 0 && j < n){
        i = j;
        j++;
        while(amount > 0 && i < n){
            count += amount / coins[i];
            amount %= coins[i];
            i++;
        }
    }
    if(amount > 0){
        return -1;
    }
    return count;
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