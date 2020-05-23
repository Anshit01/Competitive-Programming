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
    int t, n, l;
    cin >> t;

    set<int> st, st2;
    while(t--){
        cin >> n;
        int imp = 0, impi = 0;
        for(int i = 1; i <= n; i++){
            cin >> l;
            bool filled = false;
            int a;
            for(int j = 1; j <= l; j++){
                cin >> a;
                st2.insert(a);
                if(!filled){
                    if(st.find(a) == st.end()){
                        st.insert(a);
                        filled = true;
                    }
                }
            }
            if(!filled){
                
                for(int j = 1; j <= l; j++){
                    if(!(st2.find(j) == st2.end())){
                        imp = j;
                    }
                }
                impi = i;
            }
            st2.clear();
        }
        if(imp != 0){
            cout << "IMPROVE\n" << impi << " " << imp << endl; 
        }
        else{
            cout << "OPTIMAL\n" ;
        }
        st.clear();
        
    }
}