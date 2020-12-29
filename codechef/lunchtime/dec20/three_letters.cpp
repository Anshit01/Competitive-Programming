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
    bool operator() (const pair<int, char>& a, const pair<int, char>& b){
        if(a.first > b.first){
            return true;
        }
        return false;
    }
};

void solve() {
    string s;
    cin >> s;
    multiset<pair<int, char>, cmp> st;
    
    map<char, int> mp;
    f(i, 'a', 'z' + 1){
        mp[i] = 0;
    }
    f(i, 0, s.size()){
        mp[s[i]]++;
    }
    f(i, 'a', 'z' + 1){
        if(mp[i] != 0){
            st.insert({mp[i], i});
        }
    }
    int cnt = 0;
    while(!st.empty()){
        auto pr = *st.begin();
        int n = pr.first;
        if(n < 2){
            st.erase(st.lower_bound(pr));
            continue;
        }
        if(n % 2 == 1){
            cnt++;
            n -= 3;
        }
        n /= 2;
        st.erase(st.lower_bound(pr));
        while(!st.empty() && n > 0){
            auto p = *st.rbegin();
            int m = p.first;
            if(n >= m){
                n -= m;
                cnt += m;
                st.erase(st.lower_bound(p));
            }else{
                cnt += n;
                st.erase(st.lower_bound(p));
                p.first = m - n;
                n = 0;
                st.insert(p);
            }
        }
        if(n > 0){
            cnt += (n * 2) / 3;
        }
    }
    cout << cnt << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}