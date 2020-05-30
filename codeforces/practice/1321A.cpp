#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    int a1[100], a2[100];
    
    f(i, 0, n){
        cin >> a1[i];
    }
    f(i, 0, n){
        cin >> a2[i];
    }
    int score1 = 0, score2 = 0, extra1 = 0;
    f(i, 0, n){
        if(a2[i] == 1){
            score2++;
            if(a1[i] == 1) score1++;
        }
        else{
            if(a1[i] == 1) extra1++;
        }
    }
    int score_needed = score2 + 1 - score1;
    if(extra1 == 0){
        dbg(-1);
    }
    else{
        dbg((float)ceil(score_needed/(float)extra1));
    }
    
}