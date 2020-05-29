/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

inline bool isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return true;
    }
    return false;
}

int maxVowels(string s, int k) {
    int n = s.size(), curVowels = 0, maxVowels = 0;
    for(int i = 0; i < k; i++){
        if(isVowel(s[i])){
            curVowels++;
        }
    }
    maxVowels = curVowels;
    int i = 0;
    while(i + k < n){
        if(isVowel(s[i])){
            curVowels--;
        }
        if(isVowel(s[i+k])){
            curVowels++;
        }
        maxVowels = max(maxVowels, curVowels);
        i++;
    }
    return maxVowels;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}