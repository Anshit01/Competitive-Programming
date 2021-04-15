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
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    f(i, 0, n){
        a[i] -= '0';
        b[i] -= '0';
    }
    vector<int> pos;
    pos.push_back(-1);
    vector<int> cnt(2, 0);
    f(i, 0, n){
        cnt[a[i]]++;
        if(cnt[0] == cnt[1]){
            pos.push_back(i);
        }
    }
    f(i, pos.back()+1, n){
        if(a[i] != b[i]){
            return false;
        }
    }
    // bool check = [] (int a, int b, int p){
    //     if(p)
    // }
    while(pos.size() > 1){
        int r = pos.back();
        pos.pop_back();
        int l = pos.back() + 1;
        bool p = false;
        if(a[l] == b[l]){
            p = true;
        }
        f(i, l, r+1){
            if(p && a[i] != b[i]){
                return false;
            }
            if(!p && a[i] == b[i]){
                return false;
            }
        }
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