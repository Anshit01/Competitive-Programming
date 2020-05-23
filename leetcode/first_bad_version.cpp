#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

bool isBadVersion(int version);

int firstBadVersion(int n) {
    int start = 1, end = n, mid;
    while(start < end){
        mid = (int)((long long)((long long)start + (long long)end)/2);
        if(isBadVersion(mid)){
            end = mid;
        } else{
            start = mid+1;
        }
    }
    return start;
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