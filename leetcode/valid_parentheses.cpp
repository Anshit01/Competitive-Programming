#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

bool isValid(string s){
    stack<int> st;
    for(char c : s){
        if(c == '(' or c == '{' or c == '['){
            st.push(c);
        }
        else if(st.size() == 0){
            return false;
        }
        else{
            if((c == ')' and st.top() == '(') or (c == '}' and st.top() == '{') or (c == ']' and st.top() == '[')){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    if(st.size() == 0){
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}