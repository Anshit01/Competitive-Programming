/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
//#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
#define endl '\n'
using namespace std;

struct cmp{
    bool operator() (const pair<int, int>& p1, const pair<int, int>& p2) const {
        if(p1.first > p2.first){
            return true;
        }else if(p1.first == p2.first && p1.second < p2.second){
            return true;
        }
        return false;
    }
};

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    set<pair<int, int>, cmp> pq;
    set<pair<int, int>> q;
    int op, m, num;
    int n = 1;
    f(i, 0, t){
        cin >> op;
        if(op == 1){
            cin >> m;
            pq.insert({m, n});
            q.insert({n, m});
            n++;
        }else if(op == 2){
            auto pr = *q.begin();
            num = pr.first;
            m = pr.second;
            cout << num << ' ';
            pq.erase({m, num});
            q.erase({num, m});
        }else{
            auto pr = *pq.begin();
            m = pr.first;
            num = pr.second;
            cout << num << ' ';
            pq.erase({m, num});
            q.erase({num, m});
        }
    }
    cout << endl;
}