#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool checkIfExist(vector<int>& arr) {
    unordered_set<int> st;
    int n = arr.size();
    int zeroCount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            st.insert(arr[i]);
        }else{
            zeroCount++;
        }
    }
    if(zeroCount > 1){
        return true;
    }
    for(int i = 0; i < n; i++){
        if(st.find(2*arr[i]) != st.end()){
            return true;
        }
    }
    return false;
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