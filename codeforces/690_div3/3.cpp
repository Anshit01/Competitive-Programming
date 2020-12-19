/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
//#define int long long
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

vector<int> ans;

bool rec(int sum, int d, int req){
    if(req - sum <= d){
        ans.clear();
        ans.push_back(req - sum);
        return true;
    }
    for(int i = d; i > 0; i--){
        if(rec(sum + i, i - 1, req)){
            ans.push_back(i);
            return true;
        }
    }
    return false;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        ans.clear();
        cin >> n;
        auto flag = rec(0, 9, n);
        if(flag){
            sort(ans.begin(), ans.end());
            f(i, 0, ans.size()){
                cout << ans[i];
            }
            cout << endl;
        }else{
            cout << -1 << endl;
        }
    }

}