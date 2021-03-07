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

bool isValid(string& s){
    int lcnt = 0;
    int n = s.size();
    f(i, 0, n){
        if(s[i] == '('){
            lcnt++;
        }else{
            if(lcnt > 0){
                lcnt--;
            }else{
                return false;
            }
        }
    }
    if(lcnt) return false;
    return true;
}

bool solve() {
    string s;
    cin >> s;
    int n = s.size();
    char fst = s[0];
    char sec = 'D';
    f(i, 0, n){
        if(s[i] != fst){
            sec = s[i];
            break;
        }
    }
    char third = 'E';
    f(i, 0, n){
        if(s[i] != fst && s[i] != sec){
            third = s[i];
            break;
        }
    }
    string s1((int)n, ' ');
    f(i, 0, n){
        if(s[i] == fst){
            s1[i] = '(';
        }else{
            s1[i] = ')';
        }
    }
    if(isValid(s1)){
        return true;
    }
    f(i, 0, n){
        if(s[i] == fst || s[i] == sec){
            s1[i] = '(';
        }else{
            s1[i] = ')';
        }
    }
    if(isValid(s1)){
        return true;
    }
    f(i, 0, n){
        if(s[i] == fst || s[i] == third){
            s1[i] = '(';
        }else{
            s1[i] = ')';
        }
    }
    if(isValid(s1)){
        return true;
    }
    return false;
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