/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

vector<int> minFact;

void genMinFact(int n){
    minFact.assign(n+1, 0);
    vector<int> primes;
    for (int i=2; i<=n; ++i) {
        if (minFact[i] == 0) {
            minFact[i] = i;
            primes.push_back (i);
        }
        for (int j=0; j<(int)primes.size() && primes[j]<=minFact[i] && i*primes[j]<=n; ++j)
            minFact[i * primes[j]] = primes[j];
    }
    for(int i = 2; i <= n; i++){
        if(minFact[i] == 1) minFact[i] = i;
    }
}

void solve() {
    int a, b;
    int ca = 0, cb = 0;
    cin >> a >> b;
    while(a != b){
        while(a > b){
            a /= minFact[a];
            ca++;
        }
        while(b > a){
            b /= minFact[b];
            cb++;
        }
    }
    cout << ca + cb << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    genMinFact(1e6+2);
    cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}