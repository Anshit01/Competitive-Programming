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
#define endl '\n'
using namespace std;

vector<char> generatePrimes(int n){
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
    // vector<int> primes;
    // for(int i = 2; i <= n; i++){
    //     if(is_prime[i]){
    //         primes.push_back(i);
    //     }
    // }
    return is_prime;
}



int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    auto is_prime = generatePrimes(1e6+1);
    vector<int> dp(1e6+1, 0);
    int cnt = 0;
    f(i, 2, 1e6+1){
        if(is_prime[i] && is_prime[i-2]){
            cnt++;
        }
        dp[i] = cnt;
    }
    while(T--){
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}