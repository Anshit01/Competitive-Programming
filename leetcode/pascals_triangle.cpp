#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;
    triangle.push_back(vector<int>());
    triangle[0].push_back(1);
    for(int r = 1; r < numRows; r++){
        triangle.push_back(vector<int>());
        triangle[r].push_back(1);
        for(int i = 0; i < r/2; i++){
            triangle[r].push_back(triangle[r-1][i] + triangle[r-1][i]);
        }
        int i = (r+1)/2 - 1;
        while(i > 0){
            triangle[r].push_back(triangle[r][i]);
        }
        triangle[r].push_back(1);
    }
    return triangle;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}