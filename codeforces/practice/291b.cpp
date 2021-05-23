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
    getline(cin, s);
    bool q = false;
    string word;
    for(char c : s){
        if(c == '\"'){
            if(q){
                cout << '<' << word << '>' << endl;
                word = "";
                q = false;
            }else{
                q = true;
            }
        }else if(c == ' '){
            if(q){
                word.push_back(c);
            }else if(!word.empty()){
                cout << '<' << word << '>' << endl;
                word = "";
            }
        }else{
            word.push_back(c);
        }
    }
    if(!word.empty()){
        cout << '<' << word << '>' << endl;
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