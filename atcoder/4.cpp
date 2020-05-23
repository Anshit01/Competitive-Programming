#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    map<int, int> dict;
    map<int, int> dict2;
    map<int, int>::iterator itr;
    map<int, int>::iterator itr2;
    int arr[n];
    f(i, 0, n){
        cin >> arr[i];
        pair<map<int, int>::iterator, bool> res = dict.insert(pair<int, int>(arr[i], 1));
        if(!res.second){
            dict[arr[i]] += 1;
        }

    }
    for(itr = dict.begin(); itr != dict.end(); ++itr){
        //cout << itr->first << "   " << itr->second << endl;     //////

        int sum = 0;
        if(itr->second > 2){
            sum = ((itr->second -1) * (itr->second - 2)) / 2;
        }
        for(itr2 = dict.begin(); itr2 != dict.end(); ++itr2){
            if(itr != itr2 and itr2->second > 1)
                sum += (itr2->second * (itr2->second -1)) / 2;
        }
        dict2.insert(pair<int, int>(itr->first, sum));
        //dbg(sum);
    }
    f(i, 0, n){
        dbg(dict2[arr[i]]);
    }
    
}