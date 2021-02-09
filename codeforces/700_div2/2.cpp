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

bool solve() {
    int A, B, n;
    cin >> A >> B >> n;
    vector<int> a(n), b(n);
    inputArray(a);
    inputArray(b);
    int maxi = 0;
    f(i, 0, n){
        if(a[i] > a[maxi])
            maxi = i;
    }
    int maxa = a[maxi], maxb = b[maxi];
    a.erase(a.begin()+maxi);
    b.erase(b.begin()+maxi);
    a.push_back(maxa);
    b.push_back(maxb);
    f(i, 0, n){
        int r = (b[i] + A - 1) / A;
        r--;
        B -= a[i] * r;
        if(B <= 0) return false;
        B -= a[i];
    }
    return true;
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