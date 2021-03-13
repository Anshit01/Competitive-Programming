/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

class FenwickTree {
    vector<int> arr;
    vector<int> tree;

    int sum(int i){
        int s = 0;
        while(i >= 0){
            s += tree[i];
            i = (i & (i+1)) - 1;
        }
        return s;
    }

public:
    int size;

    FenwickTree(int size){
        this->size = size;
        arr.assign(size, 0);
        tree.assign(size, 0);
    }

    FenwickTree(vector<int>& arr) : FenwickTree(arr.size()){
        for(int i = 0; i < size; i++){
            add(i, arr[i]);
        }
    }

    void add(int i, int val){
        arr[i] += val;
        while(i < size){
            tree[i] += val;
            i = i | (i+1);
        }
    }

    void update(int i, int val){
        int curVal = arr[i];
        arr[i] = val;
        while(i < size){
            tree[i] += val - curVal;
            i = i | (i+1);
        }
    }

    void range_add(int l,int r,int val){
        if(l < 0) l = 0;
      update(l,val);
      update(r+1,-val);
   }

    int query(int l, int r){
        return sum(r) - sum(l-1);
    }
};

template <typename T>
class SegTreeSum {
public:
   vector<T> t, lazy, A;
   int n;

   SegTreeSum (int n) {
      this->n = n;
      this->t.assign(4 * n + 10, 0);
      this->lazy.assign(4 * n + 10, 0);
   }

   SegTreeSum (vector<T> a) : SegTreeSum (a.size()) {
      this->A = a;
      build(1, 0, n - 1);
   }

   void build (int v, int tl, int tr) {
      if (tl == tr) {
         t[v] = A[tl];
         return;
      }
      int tm = (tl + tr) / 2;
      build (v << 1, tl, tm);
      build (v << 1 | 1, tm + 1, tr);
      t[v] = t[v << 1] + t[v << 1 | 1];
   }

   void push (int v, int tl, int tr) {
      if (lazy[v]) {
         t[v] += (tr - tl + 1) * lazy[v];
         if (tl != tr) {
            lazy[v << 1] += lazy[v];
            lazy[v << 1 | 1] += lazy[v];
         }
         lazy[v] = 0;
      }
   }

   void update (int v, int tl, int tr, int l, int r, T val) {
      push (v, tl, tr);
      if (tl > r or tr < l) return;
      if (tl >= l and tr <= r) {
         lazy[v] += val;
         push (v, tl, tr);
         return;
      }
      int tm = (tl + tr) / 2;
      update (v << 1, tl, tm, l, r, val);
      update (v << 1 | 1, tm + 1, tr, l, r, val);
      t[v] = t[v << 1] + t[v << 1 | 1];
   }

   T query (int v, int tl, int tr, int l, int r) {
      if (tr < l or tl > r) return 0;
      push (v, tl, tr);
      if (tl >= l and tr <= r) return t[v];
      int tm = (tl + tr) / 2;
      return query (v << 1, tl, tm, l, r) + 
             query (v << 1 | 1, tm + 1, tr, l, r);
   }

   T query (int l, int r) {
      return query (1, 0, n - 1, l, r);
   }

   T query (int p) {
      return query (1, 0, n - 1, p, p);
   }

   void update (int l, int r, T val) {
      update (1, 0, n - 1, l, r, val);
   }

   void update (int p, T val) {
      update (1, 0, n - 1, p, p, val);
   }
};

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    inputArray(a);
    FenwickTree ftree(n);
    SegTreeSum<int> seg(n);
    f(i, 0, n){
        // cout << i << endl;
        // f(j, 0, n){
        //     if(ftree.query(j, j)){
        //         cout << "1 ";
        //     }else{
        //         cout << "0 ";
        //     }
        // }
        // cout << endl;
        if(a[i] != 0){
            // ftree.range_add(i - a[i] + 1, i, 1);
            seg.update(max(0ll, i - a[i] + 1), i, 1);
        }
    }
    f(i, 0, n){
        if(seg.query(i, i)){
            cout << "1 ";
        }else{
            cout << "0 ";
        }
    }
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}