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
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        int n = s.size();
        vector<int> arr(n);
        f(i, 0, n){
            arr[i] = s[i] - '0';
        }
        vector<int> singleCnt(10, 0);
        vector<pair<int, bool>> doubleCnt(100, {0, false});
        f(i, 0, n){
            singleCnt[arr[i]]++;
            f(j, 0, 10){
                if(j != arr[i]){
                    doubleCnt[arr[i] * 10 + j].second = true;
                }
            }
            f(j, 0, 10){
                if(j != arr[i]){
                    if(doubleCnt[j*10 + arr[i]].second){
                        doubleCnt[j*10 + arr[i]].second = false;
                        doubleCnt[j*10 + arr[i]].first += 2;
                    }
                }
            }
        }
        int ans = *max_element(singleCnt.begin(), singleCnt.end());
        f(i, 0, 100){
            ans = max(ans, doubleCnt[i].first);
        }
        ans = n - ans;
        cout << ans << endl;
    }
}