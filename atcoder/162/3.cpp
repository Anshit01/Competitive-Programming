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
    ll n;
    cin >> n;
    ll sum = (n * (n+1))/2;
    f(i, 0, n){
        f(j, i+1, n){
            sum += 6 * __gcd(i+1, j+1);
        }
    }
    f(i, 0, n){
        f(j, i+1, n){
            f(k, j+1, n){
                sum += 6 *__gcd(__gcd(i+1, j+1), k+1);
            }
        }
    }
    cout << sum << endl;
}