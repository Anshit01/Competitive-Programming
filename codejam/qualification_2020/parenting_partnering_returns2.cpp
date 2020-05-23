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
        bool possible = true;
        char ans[n];

        multimap<int, pair<int, int>> mp;
        int start, end;
        f(ni, 0, n){
            cin >> start >> end;
            mp.insert({start, {ni, end}});
        }
        int i = 0;
        int cend = 0, jend = 0;
        for(auto itr = mp.begin(); itr != mp.end(); itr++){
            start = (*itr).first;
            end = (*itr).second.second;
            if(cend <= start){
                cend = end;
                ans[(*itr).second.first] = 'C';
            }
            else{
                if(jend <= start){
                    jend = end;
                    ans[(*itr).second.first] = 'J';
                }
                else{
                    possible = false;
                }
            }
            if(!possible){
                break;
            }
            i++;
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