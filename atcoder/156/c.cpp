#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    int arr[n];
    f(i, 0, n){
        cin >> arr[i];
    }
    int min = INT_MAX;
    int pts = 0;
    f(p, 1, 100){
        pts = 0;
        f(i, 0, n){
            pts += (arr[i] - p) * (arr[i] - p);
        }
        if(pts < min){
            min = pts;
        }
    }
    cout << min << endl;

}