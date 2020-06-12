/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    f(i, 0, n){
        cin >> arr[i];
    }
    int d = 0, md = 0, lastmin;
    f(i, 1, n){
        if(d == 0){
            if(arr[i-1] < arr[i]){
                lastmin = arr[i-1];
                d = 1;
                md = max(md, d);
            }
        }else{
            if(lastmin < arr[i]){
                d++;
                md = max(md, d);
            }else{
                d = 0;
            }
        }
    }
    cout << md << endl;
}