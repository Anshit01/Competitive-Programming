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

int next(int i){
    return (i+1) % 4;
}

bool check(vector<int>& a, vector<bool> p, int n, int d){
    if(d == 4){
        f(i, 0, 4){
            if(p[i] + p[next(i)] <= a[i]){
                return false;
            }
        }
        return true;
    }
    if(a[d] < n-1){
        if(check(a, p, n, d+1)) return true;
    }
    if(a[d] == n){
        p[d] = true;
        p[next(d)] = true;
        return check(a, p, n, d+1);
    }else if(a[d] > 0){
        bool p1 = p[d];
        bool p2 = p[next(d)];
        p[d] = true;
        if(check(a, p, n, d+1)) return true;
        p[d] = p1;
        p[next(d)] = true;
        if(check(a, p, n, d+1)) return true;
        p[d] = true;
        if(a[d] > 1){
            if(check(a, p, n, d+1)) return true;
        }
        p[d] = p1;
        p[next(d)] = p2;
    }
    return false;
}

bool solve() {
    int n;
    vector<int> a(4);
    cin >> n;
    inputArray(a);
    return check(a, vector<bool>(4, 0), n, 0);
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        // solve();
        if(solve())
        	cout << "YES" << endl;
        else
        	cout << "NO" << endl;
    }
    return 0;
}