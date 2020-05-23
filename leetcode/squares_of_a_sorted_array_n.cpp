#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<int> sortedSquares(vector<int>& A) {
    vector<int> ans;
    int len = A.size();
    int negative_ptr, positive_ptr = 0;
    while(positive_ptr < len and A[positive_ptr] < 0){
        positive_ptr++;
    }
    negative_ptr = positive_ptr - 1;
    while(positive_ptr < len or negative_ptr >= 0){
        if(positive_ptr >= len){
            ans.push_back((int)A[negative_ptr] * (int)A[negative_ptr]);
            negative_ptr--;
        }
        else if(negative_ptr < 0){
            ans.push_back((int)A[positive_ptr] * (int)A[positive_ptr]);
            positive_ptr++;
        }
        else{
            if(A[positive_ptr] < -A[negative_ptr]){
                ans.push_back((int)A[positive_ptr] * (int)A[positive_ptr]);
                positive_ptr++;
            }
            else{
                ans.push_back((int)A[negative_ptr] * (int)A[negative_ptr]);
                negative_ptr--;
            }
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}