#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t, n, m;
    cin >> t;
    bool flag = false;
    while(t--){
        flag = false;
        cin >> n >> m;
        int a[n], as[n];
        int p[m];
        f(i, 0, n){
            cin >> a[i];
            as[i] = a[i];
        }
        f(i, 0, m){
            cin >> p[i];
            p[i]--;
        }
        sort(p, p+m);
        sort(as, as+n);
        flag = true;
        f(i, 0, n){
            if(a[i] != as[i]){
                flag = false;
            }
        }
        if(flag){
            cout << "YES" << endl;
            continue;
        }
        flag = false;
        int start = p[0], end = p[0];
        for(int i = 0; i < m-1; i++){
            if(end+1 != p[i+1]){
                sort(a+start, a+end+2);
                end = p[i+1];
                start = end;
            }
            else{
                end++;
            }
        }
        sort(a+start, a+end+2);
        
        f(i, 0, n){
            if(a[i] != as[i]){
                flag = true;
                cout <<"NO" << endl;
                break;
            }
        }
        if(!flag){
            cout << "YES" << endl;

        }
    }
}
