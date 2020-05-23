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
    set<int> st;
    f(x, 1, t+1){
        cin >> n;
        int arr[n][n];
        st.clear();
        f(i, 0, n){
            f(j, 0, n){
                cin >> arr[i][j];
            }
        }
        ll k = 0, r = 0, c = 0;
        f(i, 0,n){
            k += arr[i][i];
        }
        f(i, 0, n){
            f(j, 0, n){
                if(st.find(arr[i][j]) == st.end()){
                    st.insert(arr[i][j]);
                }
                else{
                    r++;
                    break;
                }
            }
            st.clear();
        }
        f(j, 0, n){
            f(i, 0, n){
                if(st.find(arr[i][j]) == st.end()){
                    st.insert(arr[i][j]);
                }
                else{
                    c++;
                    break;
                }
            }
            st.clear();
        }
        cout << "Case #" << x << ": " << k << ' ' << r << ' ' << c << endl;
    }
}