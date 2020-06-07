/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool compare(vector<int> a, vector<int> b){
    if(a[0] < b[0]){
        return true;
    }
    if(a[0] == b[0]){
        if(a[1] > b[1]){
            return true;
        }
    }
    return false;
}

vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
    sort(people.begin(), people.end(), compare);
    int n = people.size();
    vector<vector<int>> ans(n, vector<int>());
    for(auto p : people){
        int emptyToLeft = p[1];
        int count = 0;
        int i;
        for(i = 0; i < n; i++){
            if(ans[i].size() == 0){
                count++;
                if(count == emptyToLeft + 1){
                    break;
                }
            }
        }

        ans[i] = p;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>> vec({{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}});
    auto ans = reconstructQueue(vec);
    for(auto p : ans){
        dbg2(p[0], p[1]);
    }
}