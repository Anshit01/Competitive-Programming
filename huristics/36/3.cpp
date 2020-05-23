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
    vector<bool> digits(10, true);
    int n, k;
    cin >> n >> k;
    int a;
    f(i, 0, k){
        cin >> a;
        digits[a] = false;
    }
    int m = n;
    int ans;
    bool flag;
    while(true){
        flag = true;
        while(m > 0){
            if(!digits[m%10]){
                flag = false;
                break;
            }
            m /= 10;
        }
        if(flag){
            break;
        }
        n++;
        m = n;

    }
    cout << n << endl;
}