/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<string> ans;
int n;
void generate(vector<int> count, string s){
    f(i, 0, 26){
        if(count[i]){
            count[i]--;
            s.push_back('a' + i);
            if(s.size() == n){
                ans.push_back(s);
                return;
            }
            generate(count, s);
            s.pop_back();
            count[i]++;
        }

    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    n = str.length();
    vector<int> count(26, 0);
    for(char c : str){
        count[c - 'a']++;
    }
    generate(count, string());
    cout << ans.size() << endl;
    for(string& s : ans){
        cout << s << '\n';
    }
}