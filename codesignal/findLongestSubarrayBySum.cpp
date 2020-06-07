/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<int> findLongestSubarrayBySum(int s, vector<int> arr){
    int curSum = 0, start = 0, end = 0, maxlen = 0;
    vector<int> ans({-1});
    int n = arr.size();
    if(n == 1 && arr[0] == s){
        return {1, 1};
    }
    if(s == 0){
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                return {i+1, i+1};
            }
        }
        return {-1};
    }
    while(end < n){
        while(curSum <= s && end < n){
            end++;
            curSum += arr[end-1];
            if(curSum == s){
                if(end - start > maxlen){
                    maxlen = end - start;
                    ans = {start + 1 , end};
                }
            }
        }
        while(curSum >= s){
            curSum -= arr[start];
            start++;
            if(curSum == s){
                if(end - start > maxlen){
                    maxlen = end - start;
                    ans = {start + 1, end};
                }
            }
        }
        
    }
    return ans;
}

int main(){
    vector<int> vec({1, 0, 2});
    auto ans = findLongestSubarrayBySum(0, vec);
    for(int i : ans){
        cout << i << ' ';
    }
    cout << endl;
}