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
    ll sum = (n*(n+1))/2;
    ll three = n/3;
    ll five = n/5;
    sum -= 3 * (three*(three+1))/2;
    sum -= 5 * (five*(five+1))/2;
    ll fifteen = n/15;
    sum += 15 * (fifteen*(fifteen+1))/2;
    cout << sum << endl;
}