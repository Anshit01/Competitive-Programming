/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int guess(int x);

int guessNumber(int n){
    int l = 0, r = n, mid;
    while(l <= r){
        mid = l + (r-l)/2;
        int ans = guess(mid);
        if(ans == 0){
            return mid;
        }else if(ans == 1){
            l = mid + 1;
        }else{
            r = mid -1;
        }
    }
    return 0;
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