/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

string str = "abacaba";

bool contains(string s, int ind){
    f(i, 0, 7){
        if(s[ind+i] != str[i]){
            return false;
        }
    }
    return true;
}

bool mayContain(string s, int ind){
    f(i, 0, 7){
        if(s[ind+i] != str[i] && s[ind+i] != '?'){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        string s;
        cin >> s;
        int containCnt = 0, mayContainCnt = 0;
        vector<int> changeInd;
        f(i, 0, n-7+1){
            if(contains(s, i)){
                containCnt++;
            }else{
                if(mayContain(s, i)){
                    mayContainCnt++;
                    if(containCnt == 0){
                        changeInd.push_back(i);
                    }
                }
            }
        }
        if(containCnt == 1){
            cout << "yes\n";
            f(i, 0, n){
                if(s[i] == '?'){
                    s[i] = 'x';
                }
            }
            cout << s << endl;
        }else if(containCnt == 0 && mayContainCnt > 0){
            bool flag = false;
            for(int ind : changeInd){
                string si(s);
                f(i, 0, 7){
                    si[ind+i] = str[i];
                }
                int cnt = 0;
                f(i, 0, n-7+1){
                    if(contains(si, i)){
                        cnt++;
                    }
                }
                if(cnt == 1){
                    flag = true;
                    s = si;
                    break;
                }
            }
            if(flag){
                cout << "YES\n";
                f(i, 0, n){
                    if(s[i] == '?'){
                        s[i] = 'x';
                    }
                }
                cout << s << endl;
            }else{
                cout << "NO\n";
            }

        }else{
            cout << "no\n";
        }
    }
}