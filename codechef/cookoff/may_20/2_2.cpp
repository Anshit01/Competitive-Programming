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
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        string S;
        cin>>S;
        ll len=S.size();
        ll count=0;
        if(len%2 !=0)
        cout<<"0"<<"\n";
        else{
            ll k=len/2;
            for(ll i=1;i<k;i++){
                ll j=k-i;
                string s1= S.substr(0,i);
                string s2= S.substr(i,i);
                string s3= S.substr(2*i,j);
                string s4= S.substr(2*i+j,j);
                if(s1==s2 && s3==s4){
                    count++;
                }   
            }
            cout<<count<<"\n";
        }
    }
}