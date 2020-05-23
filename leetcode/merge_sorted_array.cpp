#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> ans;
    int i1 = 0, i2 = 0;
    auto itr1 = nums1.begin();
    auto itr2 = nums2.begin();
    while(i1 < m and i2 < n){
        if(*itr1 < *itr2){
            ans.push_back(*itr1);
            itr1++;
            i1++;
        }
        else{
            ans.push_back(*itr2);
            itr2++;
            i2++;
        }
    }
    if(i2 >= n){
        while(i1 < m and itr1 != nums1.end()){
            ans.push_back(*itr1);
            itr1++;
            i1++;
        }
    }
    else if(i1 >= m){
        while(i2 < n and itr2 != nums2.end()){
            ans.push_back(*itr2);
            itr2++;
            i2++;
        }
    }
    nums1 = ans;
}

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}