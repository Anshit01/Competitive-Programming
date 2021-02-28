#include <bits/stdc++.h>
using namespace std;

class CreateMixture {
    void add(vector<int>& ans, int a, int b, int n){
        for(int i = 0; i < n; i++){
            ans.push_back(a);
        }
        for(int i = 0; i < 10 - n; i++){
            ans.push_back(b);
        }
    }
    public:
    vector<int> mix(int num){
        vector<int> ans;
        if(num == 1000){
            add(ans, 1, 0, 10);
            return ans;
        }
        vector<int> digs(3);
        for(int i = 0; i < 3; i++){
            digs[2-i] = num % 10;
            num /= 10;
        }
        int curC = 1;
        add(ans, curC, curC-1, digs[0]);
        add(ans, curC, curC-1, digs[0] + 1);
        curC += 2;
        add(ans, curC-1, curC, digs[1]);
        add(ans, curC-1, curC, digs[1] + 1);
        curC += 2;
        add(ans, curC-1, curC, digs[1]);
        add(ans, curC-1, curC, digs[1] + 1);
        return ans;
    }
};