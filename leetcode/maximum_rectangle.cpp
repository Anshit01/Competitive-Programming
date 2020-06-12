/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int maximalRectangle(vector<vector<char>>& matrix) {
    int n = matrix.size();
    if(n == 0) return 0;
    int m = matrix[0].size();
    if(m == 0) return 0;
    int ans = 0;
    
}

int main(){
    vector<vector<char>> arr({
                                {'1','0','1','0','0'},
                                {'1','0','1','1','1'},
                                {'1','1','1','1','1'},
                                {'1','0','0','1','0'}
                            });
    cout << maximalRectangle(arr) << endl;
}