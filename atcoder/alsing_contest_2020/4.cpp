/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<int> md(string& num, int a){
    int res = 0;
    int n = num.size();
    int pc1 = a-1, pc2 = a+1;
    vector<int> l(n), r(n);
    vector<int> unit_mods(n);
    unit_mods[0] = 1;
    for(int i = 0; i < n; i++){
        res = (res*2 + (int)num[i] - '0') %a;
    }
    f(i, 1, n){
        unit_mods[i] = (unit_mods[i-1] * 2);//////////////////////////
    }
    vector<int> ans;

    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string x;
    cin >> n >> x;
    int pc = 0;
    f(i, 0, n){
        if(x[i] == '1'){
            pc++;
        }
    }
    vector<int> mods = md(x, pc);
    f(i, 0, n){
        int tpc = pc;
        if(x[i] == '1'){
            tpc--;
        }else{
            tpc++;
        }

    }
}