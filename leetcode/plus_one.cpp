#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int l = digits.size();
    bool is9 = true;
    for(int x : digits){
        if(x != 9){
            is9 = false;
        }
    }
    if(is9){
        vector<int> ans;
        ans.reserve(l+1);
        ans.push_back(1);
        for(int i = 0; i < l; i++){
            ans.push_back(0);
        }
        return ans;
    }
    int i = 1;
    while(true){
        if(digits[l-i] == 9){
            digits[l-i] = 0;
            i++;
        }
        else{
            digits[l-i]++;
            break;
        }
    }
    return digits;
}

int main(){
    ios::sync_with_stdio(0);
    vector<int> digits = {8,9,9,9};
    digits = plusOne(digits);
    for(int x : digits){
        cout << x << ' ';
    }
    cout << endl;
}