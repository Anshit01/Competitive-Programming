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

vector<int> prime;
vector<int> prime2;

bool isprime(int n){
    if(n == 1) return false;
    // if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i*i <= n; i += 2){
        if(n % i == 0) return false;
    }
    return true;
}

void gen(){
    prime.resize(10, 0);
    prime2.resize(10, 0);
    int n = 1;
    f(i, 1, 10){
        int num = n;
        while(!isprime(num)){
            num++;
        }
        prime[i] = num;
        num++;
        while(!isprime(num)){
            num++;
        }
        prime2[i] = num;
        n *= 10;
    }
}

void solve() {
    int a, b, c;
    // printArray(prime);
    // printArray(prime2);
    cin >> a >> b >> c;
    int num = prime[c];
    int aa = num;
    int bb = num;
    if(a != c)
        aa *= prime2[a-c+1];
    if(b != c)
        bb *= prime[b-c+1];
    cout << aa << ' ' << bb << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    gen();
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