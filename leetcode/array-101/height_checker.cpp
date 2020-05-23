#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int heightChecker(vector<int>& heights) {
    vector<int> sorted(heights);
    sort(sorted.begin(), sorted.end());
    int n = heights.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        if(heights[i] != sorted[i]){
            count++;
        }
    }
    return count;
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