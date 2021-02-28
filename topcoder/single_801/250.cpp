#include <bits/stdc++.h>
using namespace std;

class HouseNumbering{
    public:
    vector<int> prepareDigits(int num, int n){
        vector<int> cnt(10, 0);
        for(int i = 0; i < n; i++){
            int t = num;
            while(t > 0){
                cnt[t % 10]++;
                t /= 10;
            }

            num += 2;
        }
        return cnt;
    }
};