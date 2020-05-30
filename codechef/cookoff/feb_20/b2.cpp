#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int arr[n];
        int max, m, current;
        f(i, 0, n){
            cin >> arr[i];
        }
        int l = n;
        for(l = n; l > 0; l--){
            set<int> s;
            f(i, 0, l){
                s.insert(arr[i]);
            }
            if(s.size() != l)
        }
    }
}