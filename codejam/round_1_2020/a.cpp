#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

bool startsWith(const string &mainStr, const string &tomatch){
    if(mainStr.find(tomatch) == 0){
        return true;
    }
    return false;
}

bool endsWith(const std::string &mainStr, const std::string &toMatch){
	if(mainStr.size() >= toMatch.size() &&
			mainStr.compare(mainStr.size() - toMatch.size(), toMatch.size(), toMatch) == 0)
			return true;
		else
			return false;
}

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    string s, s_max = "";
    f(x, 1, t+1){
        cin >> n;
        bool flag = true;
        s_max = "";
        f(i, 0, n){
            cin >> s;
            if(flag){
                s = s.substr(1, s.length()-1);
                if(s.length() > s_max.length()){
                    if(endsWith(s, s_max)){
                        s_max = s;
                    }
                    else{
                        flag = false;
                    }
                }
                else if(s.length() < s_max.length()){
                    if(!endsWith(s_max, s)){
                        flag = false;
                    }
                }
                else{
                    if(s_max.compare(s) != 0){
                        flag = false;
                    }
                }
            }
        }
        cout << "Case #" << x << ": ";
        if(flag){
            cout << 'A' << s_max;
        }
        else{
            cout << '*';
        }
        cout << endl;
    }
}