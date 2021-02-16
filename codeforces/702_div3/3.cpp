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

// void solve() {
//     int n;
//     cin >> n;
    
// }

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    set<int> cubes;
    f(i, 1, (int)1e4+3){
        cubes.insert(i*i*i);
    }
    cin >> T;
    while(T--){
        bool flag = false;
        int n;
        cin >> n;
        f(i, 1, (int)1e4+2){
            int a3 = i*i*i;
            if(cubes.count(n-a3)){
                flag = true;
                break;
            }
            if(a3 > n){
                break;
            }
        }
        if(flag)
        	cout << "YES" << endl;
        else
        	cout << "NO" << endl;
    }
    return 0;
}