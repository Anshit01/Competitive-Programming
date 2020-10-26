/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
using namespace std;

vector<int> getFibs(){
    vector<int> fibs({1, 1});
    ll n1 = 1;
    ll n2 = 1;
    ll temp;
    while(n1 < 1000000000){
        temp = n1;
        n1 += n2;
        n2 = temp;
        fibs.push_back(n1);
    }
    return fibs;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    vector<int> fibs = getFibs();
    vector<int> fcounts(fibs.size());
    fcounts[0] = 0;
    fcounts[1] = 0;
    f(i, 2, fibs.size()){
        fcounts[i] = fcounts[i-1] + fibs[i] - fibs[i-1] - 1;
    }
    // cout << fcounts.back() << endl;

    while(T--){
        int n;
        cin >> n;
        int i = lower_bound(fcounts.begin(), fcounts.end(), n) - fcounts.begin();
        cout << fibs[i] - 1 - (fcounts[i] - n) << '\n';
    }
}