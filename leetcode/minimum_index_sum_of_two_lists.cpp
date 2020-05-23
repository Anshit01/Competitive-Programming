#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    unordered_map<string, int> mp;
    int l1 = list1.size(), l2 = list2.size();
    for(int i = 0; i < l1; i++){
        mp[list1[i]] = i;
    }
    int min_sum = l1 + l2;
    vector<string> min_str;
    for(int i = 0; i < l2; i++){
        if(mp.find(list2[i]) != mp.end()){
            int sum = mp.find(list2[i])->second + i;
            if(sum == min_sum){
                min_str.push_back(list2[i]);
            }
            else if(sum < min_sum){
                min_sum = sum;
                min_str.clear();
                min_str.push_back(list2[i]);
            }
        }
    }
    return min_str;
}

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}