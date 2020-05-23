#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int min_diff = INT32_MAX;
    for(int i = 1; i < n; i++){
        if(arr[i] - arr[i-1] < min_diff){
            min_diff = arr[i] - arr[i-1];
        }
    }
    vector<vector<int>> ans;
    for(int i = 1; i < n; i++){
        if(arr[i] - arr[i-1] == min_diff){
            ans.push_back({arr[i-1], arr[i]});
        }
    }
    return ans;
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