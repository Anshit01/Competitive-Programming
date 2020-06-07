/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
    int mh = 0, mv = 0;
    sort(horizontalCuts.begin(), horizontalCuts.end());
    sort(verticalCuts.begin(), verticalCuts.end());
    for(int i = 1; i < horizontalCuts.size(); i++){
        mh = max(mh, horizontalCuts[i] - horizontalCuts[i-1]);
    }
    for(int i = 1; i < verticalCuts.size(); i++){
        mv = max(mv, verticalCuts[i]- verticalCuts[i-1]);
    }
    mh = max(mh, horizontalCuts[0]);
    mh = max(mh, h - horizontalCuts.back());
    mv = max(mv, verticalCuts[0]);
    mv = max(mv, w - verticalCuts.back());
    return ((long long) mv * mh) % mod;
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