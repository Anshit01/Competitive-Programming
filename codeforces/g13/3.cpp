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
}

int cntf(int n, int mx){
    int fact = 1;
    int ans = 0;
    while(n > 1){
        int mfact = minFact[n];
        fact *= mfact;
        n /= mfact;
        if(fact <= mx)
            ans++;
        else
            break;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    inputArray(s);
    int ans = 0;
    f(i, 0, n){
        ans += s[i] - 1;
        for(int j = i+2; j < n; j++){
            int cnt = cntf(j - i, s[i]);
            s[j] = max(s[j] - cnt, 1ll);
        }
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // genMuls(5002);
    genMinFact(5002);
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