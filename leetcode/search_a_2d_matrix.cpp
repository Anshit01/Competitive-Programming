/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if(matrix.size() == 0){
        return false;
    }
    long long length = matrix.size() * matrix[0].size();
    if(length == 0){
        return false;
    }
    int w = matrix[0].size();
    long long start = 0, end = length-1, mid;
    while(start < end){
        mid = (start + end)/2;
        if(matrix[mid/w][mid % w] == target){
            return true;
        }
        if(matrix[mid/w][mid%w] > target){
            end = mid;
        }else{
            start = mid + 1;
        }
    }
    if(matrix[start/w][start%w] == target){
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>> mat({{1,3,5,7},{10,11,16,20},{23,30,34,50}});
    cout << searchMatrix(mat, 13) << endl;
}