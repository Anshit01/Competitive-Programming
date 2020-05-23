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
    int t, n, x;
    int a;
    cin >> t;
    while(t--){
        cin >> n >> x;
        set<int> st;
        f(i, 0, n){
            cin >> a;
            st.insert(a);
        }
        auto itr = st.begin();
        int prev = 0;
        int i = 1;
        int mx = *(--st.end());
        for(; x >= 0; i++){
            if(st.find(i) == st.end()){
                x--;
            }
        }
        cout << i-2 << endl;
    }
}