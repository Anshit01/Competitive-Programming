#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool isEmpty(vector<int>& counter){
    for(int i = 0; i < 26; i++){
        if(counter[i] != 0){
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    vector<int> counter(26, 0);
    int l1 = s1.length(), l2 = s2.length();
    if(l1 == 0){
        return true;
    }
    if(l1 > l2){
        return false;
    }
    for(int  i = 0; i < l1; i++){
        counter[s1[i] - 'a']++;
    }
    for(int i = 0; i < l1; i++){
        counter[s2[i] - 'a']--;
    }
    if(isEmpty(counter)){
        return true;
    }
    int start = 0;
    for(int i = l1; i < l2; i++){
        counter[s2[start] - 'a']++;
        counter[s2[i] - 'a']--;
        if(isEmpty(counter)){
            return true;
        }
        start++;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout << checkInclusion("ab", "eidbaooo") << endl;
}