/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<vector<int>> rotateImage(vector<vector<int>> a){
    int n = a.size();
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n-2*i-1; j++){
            int tmp = a[i+j][n-i-1];
            a[i+j][n-i-1] = a[i][i+j];
            swap(tmp, a[n-i-1][n-i-1-j]);
            swap(tmp, a[n-i-1-j][i]);
            a[i][i+j] = tmp;
        }
    }
    return a;
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