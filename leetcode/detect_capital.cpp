#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

bool detectCapitalUse(string word) {
    int len = word.length();
    if(len < 2){
        return true;
    }
    bool flag = true;
    int i = 0;
    if(word[0] <= 'Z'){
        i = 2;
        if(word[1] <= 'Z'){
            while(i < len){
                if(word[i] > 'Z'){
                    flag = false;
                    break;
                }
            }
        } else{
            while(i < len){
                if(word[i] < 'a'){
                    flag = false;
                    break;
                }
            }
        }
    } else{
        while(i < len){
            if(word[i] < 'a'){
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}