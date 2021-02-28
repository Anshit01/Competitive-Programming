#include <bits/stdc++.h>
using namespace std;

class FriendFinder{
    public:
    int distance(string s){
        int sn = 0, fn = 0;
        int si, fi;
        for(int i = 0; i <s.size(); i++){
            if(s[i] == 'S') sn = i;
            if(s[i] == 'F') fn = i;
        }
        return abs(sn-fn);
    }
};

int main(){
    string s;
    cin >> s;
    FriendFinder sol = FriendFinder();
    cout << sol.distance(s) << endl;
}