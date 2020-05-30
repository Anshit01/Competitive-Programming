/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n+1, 0);
    int a;
    f(i, 1, n){
        cin >> a;
        arr[a] = 1;
    }
    f(i, 1, n+1){
        if(!arr[i]){
            cout << i << endl;
            return 0;
        }
    }
}