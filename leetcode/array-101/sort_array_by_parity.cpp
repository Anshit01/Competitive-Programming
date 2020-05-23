#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<int> sortArrayByParity(vector<int>& A) {
    int j = 0;
    int n = A.size();
    for(int i = 0; i < n; i++){
        if(A[i] & 1 == 0){
            swap(A[i], A[j]);
            j++;
        }
    }
    return A;
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