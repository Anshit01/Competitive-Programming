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

bool solve() {
    int n;
    cin >> n;
    int n2 = 2*n;
    vector<int> d(n2);
    inputArray(d);
    sort(d.begin(), d.end(), greater<int>());
    vector<int> arr;
    for(int i = 0; i < n2; i += 2){
        if(d[i] == d[i+1]){
            arr.push_back(d[i]);
        }else{
            return false;
        }
    }
    set<int> a;
    int suma = 0;
    f(i, 0, n){
        int num = arr[i] - 2*suma;
        if(num % (2*(n-i)) == 0){
            num /= 2*(n-i);
        }else{
            return false;
        }
        if(a.count(num) || num <= 0){
            return false;
        }
        a.insert(num);
        suma += num;
    }
    return true;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        if(solve()){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}