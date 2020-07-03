/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;



int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   long long s, x, n;
   cin >> s >> x >> n;
   vector<pair<int, int>> exc(n);
   int t, y;
   for(int i = 0; i <  n; i++){
      cin >> t >> y;
      exc[i] = {t, y};
   }
   sort(exc.begin(), exc.end());
   int curDay = 0;
   int i = 0;
   while(s > 0){
      if(i < n){
         int days = exc[i].first - curDay -1;
         if(s > days * x){
            s -= days * x;
            curDay += days + 1;
            s -= exc[i].second;
            i++;

         }else{
            curDay += (s + x -1)/x;
            s = 0;
         }
      }else{
         curDay += (s + x - 1) / x;
         s = 0;
      }
   }
   cout << curDay << endl;
}