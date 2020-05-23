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
    while(t--){
        cin >> n;
        int arr[n];
        bool p1[n+1], p2[n+1];
        f(i, 0, n){
            cin >> arr[i];
            p1[i] = false;
            p2[i] = false;
        }
        set<int> st1, st2;
        int i = 0;
        for(; i < n; i++){
            if(st1.find(arr[i]) == st1.end()){
                st1.insert(arr[i]);

            }
            else{
                break;
            }
        }
        for(; i < n; i++){
            if(st2.find(arr[i]) == st2.end()){
                st2.insert(arr[i]);
            }
            else{
                break;
            }
        }
        bool flag1 = true;
        if(st1.size()+st2.size() == n){
            f(i, 1, st1.size()+1){
                if(st1.find(i) == st1.end()){
                    flag1 = false;
                    break;
                }
            }
            f(i, 1, st2.size()+1){
                if(st2.find(i) == st2.end()){
                    flag1 = false;
                    break;
                }
            }
        }
        else{
            flag1 = false;
        }
        dbg2(st1.size(), st2.size());
        if(flag1){
            
        }
        else{
            dbg(0);
        }
    }
}