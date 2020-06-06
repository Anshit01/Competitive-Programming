/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int arrayMaxConsicutiveSum2(vector<int> inputArray){
    int mx = *max_element(inputArray.begin(), inputArray.end()), max_ending_here = 0;
    int n = inputArray.size();
    for(int i = 0; i < n; i++){
        max_ending_here += inputArray[i];
        if(max_ending_here < 0){
            max_ending_here = 0;
        }
        if(max_ending_here != 0 &&mx < max_ending_here){
            mx = max_ending_here;
        }
    }
    return mx;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}