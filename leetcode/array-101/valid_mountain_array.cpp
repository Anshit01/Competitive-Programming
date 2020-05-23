#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool validMountainArray(vector<int>& A) {
    int i = 0;
    int n = A.size();
    while(i < n-1 && A[i] < A[i+1]){
        i++;
    }
    if(i >= n-1 || i == 0){
        return false;
    }
    while(i < n-1 && A[i] > A[i+1]){
        i++;
    }
    if(i < n-1){
        return false;
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