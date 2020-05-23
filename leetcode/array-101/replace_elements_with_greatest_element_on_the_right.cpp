#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    int n = arr.size(), mx = -1;
    for(int i = n-1; i >= 0; i--){
        int tmp = arr[i];
        arr[i] = mx;
        mx = max(mx, tmp);
    }
    return arr;
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