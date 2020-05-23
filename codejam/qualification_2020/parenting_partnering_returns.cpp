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
    int t, n;
    cin >> t;
    f(x, 1, t+1){
        cin >> n;
        bool ctime[3601], jtime[3601];
        f(i, 0, 3601){
            ctime[i] = false;
            jtime[i] = false;
        }
        bool possible = true;
        int start, end;
        char ans[n];
        f(ni, 0, n){
            cin >> start >> end;
            if(possible){
                bool yesc = true;
                f(i, start, end){
                    if(ctime[i]){
                        yesc = false;
                        break;
                    }
                }
                if(yesc){
                    f(i, start, end){
                        ctime[i] = true;
                    }
                    ans[ni] = 'C';
                }
                else{
                    bool yesj = true;
                    f(i, start, end){
                        if(jtime[i]){
                            yesj = false;
                            break;
                        }
                    }
                    if(yesj){
                        f(i, start, end){
                            jtime[i] = true;
                        }
                        ans[ni] = 'J';
                    }
                    else{
                        possible = false;
                    }
                }
                

            }
        }
        cout << "Case #" << x << ": ";
        if(possible){
            f(i, 0, n){
                cout << ans[i];
            }
        }
        else{
            cout << "IMPOSSIBLE";
        }
        cout << endl;
    }
}