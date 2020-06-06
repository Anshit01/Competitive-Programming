/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

class Solution {
private:
    vector<int> arr;

public:
    Solution(vector<int>& w) {
        srand(time(0));
        int n = w.size();
        arr = vector<int>(n);
        arr[0] = w[0];
        for(int i = 1; i < n; i++){
            arr[i] = w[i] + arr[i-1];
        }
    }
    
    int pickIndex() {
        int sum = arr.back();
        int r = rand() % sum;
        int i = upper_bound(arr.begin(), arr.end(), r) - arr.begin();
        return i;
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}