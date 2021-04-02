#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
#define all(x) x.begin(), x.end()
const ll mod = 1e9 + 7;
ll mod_exp(ll a, ll n) {
   if (a < 0ll)   return 0;
   if (n < 0ll)   return 0;
   ll res = 1ll;
   while (n > 0) {
      if (n & 1)   res = (res * a) % mod;
      a = (a * a) % mod;
      n = n >> 1;
   }
   return res;
}
void solve() {
   int n, u, v;
   cin >> n;
   vector <ll> a(n), in(n), ou(n), eul;
   vector <vector <ll>> adj(n);
   for (ll i = 1; i < n; i++) {
      cin >> u >> v;
      u--, v--;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }
   for (auto &i : a)
      cin >> i;
   ll cr = 0;
   vector <ll> mx(n), pm(n), sm(n + 1);
   function <void (ll, ll)> dfs = [&](ll v, ll p) {
      mx[v] = a[v];
      eul.push_back(v);
      in[v] = cr++;
      for (auto u : adj[v]) {
         if (u != p)
            dfs(u, v), mx[v] = max(mx[v], mx[u]);
      }
      ou[v] = cr - 1;
   };
   dfs(0, -1);
   for (int i = 0; i < n; i++) {
      pm[i] = max(a[eul[i]], pm[max(0, i - 1)]);
   }
   for (int i = n - 1; i >= 0; i--) {
      sm[i] = max(a[eul[i]], pm[min(n - 1, i + 1)]);
   }
   map <ll, ll> val;
   for (int i = 1; i < n; i++) {
      ll x = abs(mx[i] - max(pm[in[i] - 1], sm[ou[i] + 1]));
      val[x]++;
   }
   ll res = 0;
   for (auto i : val)
      (res += i.ff * i.ss) %= mod;
   cout << (res * mod_exp(n - 1, mod - 2)) % mod << '\n';
}
int main() {
#ifndef ONLINE_JUDGE
   freopen("inp.txt", "r", stdin);      freopen("outp.txt", "w", stdout);
#endif
   ios::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
   int t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}