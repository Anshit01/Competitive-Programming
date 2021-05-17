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

void solve() {
    string s;
    vector<int> score(3, 0);
    f(i, 0, 3){
        cin >> s;
        int c1 = s[0] - 'A';
        int c2 = s[2] - 'A';
        if(s[1] == '>'){
            score[c1]++;
        }else{
            score[c2]++;
        }
        
    }
    if(score[0] != score[1] && score[2] != score[1] && score[2] != score[0]){
        string out(3, ' ');
        f(i, 0, 3){
            out[score[i]] = 'A'+i;
        }
        cout <<out << endl;
    }else{
        cout << "Impossible" << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}