#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<int> sortedSquares(vector<int>& A) {
    int len = A.size();
    int arr[len];
    int i = 0;
    for(int x: A){
        arr[i++] = x*x;
    }
    sort(arr, arr+len);
    vector<int> ans;
    for(int i = 0; i < len; i++){
        ans.push_back(arr[i]);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}