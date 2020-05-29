/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<int> countBits(int num) {
    vector<int> ans(num+1);
    for(int i = 0; i <= num; i++){
        int count = 0;
        int n = i;
        while(n > 0){
            if(n & 1){
                count++;
            }
            n = n >> 1;
        }
        ans[i] = count;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        auto ans = countBits(n);
        for(int x : ans){
            cout << x << ' ';
        }
        cout << endl;
    }
}