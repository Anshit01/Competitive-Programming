#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int len = numbers.size();
    for(int i = 0; i < len; i++){
        if(binary_search(numbers.begin(), numbers.end(), target - numbers[i])){
            return vector<int>({i, (int)upper_bound(numbers.begin(), numbers.end(), target - numbers[i]) - numbers.begin()});
        }
    }
    return vector<int>({0, 0});
}

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}