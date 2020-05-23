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
    string s;
    f(x, 1, t+1){
        cin >> n;
        bool flag = true;
        string s_max = "", prefix = "", suffix = "", prefix_max = "", suffix_max = "";
        f(i, 0, n){
            cin >> s;
            if(flag){
                int first = s.find('*');
                prefix = s.substr(0, first);
                int last = s.find_last_of('*');
                suffix = s.substr(last+1, s.length()-last-1);

                if(suffix.length() > suffix_max.length()){
                    if(endsWith(suffix, suffix_max)){
                        suffix_max = suffix;
                    }
                    else{
                        flag = false;
                    }
                }
                else if(suffix.length() < suffix_max.length()){
                    if(!endsWith(suffix_max, suffix)){
                        flag = false;
                    }
                }
                else{
                    if(suffix_max.compare(suffix) != 0){
                        flag = false;
                    }
                }

                if(prefix.length() > prefix_max.length()){
                    if(startsWith(prefix, prefix_max)){
                        prefix_max = prefix;
                    }
                    else{
                        flag = false;
                    }
                }
                else if(prefix.length() < prefix_max.length()){
                    if(!startsWith(prefix_max, prefix)){
                        flag = false;
                    }
                }
                else{
                    if(prefix_max.compare(prefix) != 0){
                        flag = false;
                    }
                }

                for(int j = first+1; j < last; j++){
                    if(s[j] != '*'){
                        s_max.push_back(s[j]);
                    }
                }
            }
        }
        cout << "Case #" << x << ": ";
        if(flag){
            cout << prefix_max << s_max << suffix_max;
        }
        else{
            cout << '*';
        }
        cout << endl;
    }
}