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
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        cin >> n;
        vector<int> arr(n);
        f(i, 0, n){
            cin >> arr[i];
        }
        vector<pair<int, int>> sorted(n);
        for(int i= 0; i < n; i++){
            int m = arr[0];
            int mi = 0;
            for(int j = 0; j < n; j++){
                if(m > arr[j]){
                    mi = j;
                    m = arr[j];
                }
            }
            sorted[i] = {m, mi};
        }
        
    }
}