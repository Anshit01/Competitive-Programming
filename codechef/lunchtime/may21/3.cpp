/* *>>>>> anshit01 <<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

vector<int> primes;

vector<int> generatePrimes(int n){
    vector<char> is_prime(n+1, true);
    is_prime[0] = false;
    is_prime[1] = false;
    for(int i = 2; i*i <= n; i++){
        if(is_prime[i]){
            for(int j = i*i; j <= n; j += i){
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for(int i = 2; i <= n; i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}

void solve() {
    int n;
    cin >> n;
    if(n == 2){
        cout << 1 << endl;
        return;
    }
    if(n == 3){
        cout << 2 << endl;
        return;
    }
    int l = upper_bound(primes.begin(), primes.end(), n/2) - primes.begin();
    int r = upper_bound(primes.begin(), primes.end(), n) - primes.begin();
    cout << r - l + 1 << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    primes = generatePrimes(1e7+2);
    int T = 1;
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