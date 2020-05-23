#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    vector<int> arr(26, 0);
    for(char x : magazine){
        arr[x - 'a']++;
    }
    for(char c : ransomNote){
        if(arr[c - 'a'] > 0){
            arr[c - 'a']--;
        }else{
            return false;
        }
    }
    return true;
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