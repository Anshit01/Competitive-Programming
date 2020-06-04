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

std::string classifyStrings(std::string s) {
    int vowelcount = 0, consonantCount = 0;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(isVowel(s[i])){
            vowelcount++;
            consonantCount = 0;
        }else if(s[i] == '?'){
            vowelcount = 0;
            consonantCount = 0;
        }else{
            consonantCount++;
            vowelcount = 0;
        }
        if(vowelcount == 3 || consonantCount == 5){
            return "bad";
        }
    }
    vowelcount = 0;
    consonantCount = 0;
    for(int i = 0; i < n; i++){
        if(isVowel(s[i])){
            vowelcount++;
            consonantCount = 0;
        }else if(s[i] != '?'){
            vowelcount = 0;
            consonantCount++;
        }else{
            if(consonantCount != 4 && vowelcount != 2){
                vowelcount = 0;
                consonantCount = 0;
            }
            if(consonantCount == 4){
                vowelcount = 1;
                consonantCount = 0;
            }
            if(vowelcount == 2){
                consonantCount = 1;
                vowelcount = 0;
            }
        }
        if(vowelcount == 3 || consonantCount == 5){
            return "bad";
        }
    }
    vowelcount = 0;
    consonantCount = 0;
    for(int i = 0; i < n; i++){
        if(isVowel(s[i])){
            vowelcount++;
            consonantCount = 0;
        }else if(s[i] == '?'){
            vowelcount++;
            consonantCount++;
        }else{
            consonantCount++;
            vowelcount = 0;
        }
        if(vowelcount == 3 || consonantCount == 5){
            return "mixed";
        }
    }
    return "good";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    cout << classifyStrings(s) << endl;
}