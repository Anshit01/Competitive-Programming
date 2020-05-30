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
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ll arr[n];
        ll max = 0, arrsum = 0;
        bool is1 = false;
        f(i, 0, n){
            cin >> arr[i];
            if(arr[i] > max) max = arr[i];
            arrsum += arr[i];
            if(arr[i] == 1) is1 = true;
        }
        ll imax = 0;
        while(pow(k, imax) < max){
            imax++;
        }
        int i = 1, sum = arrsum;
        if(is1) sum--;
        int im = 0;
        while(sum > 0 && i <= imax){
            if(sum % (int)pow(k, i) == 0){ 
                im = i;
                i++;
            }
            else if(im != 0){
                sum -= (int)pow(k, im);
                im = 0;
            }
            else{
                i++;
            }
            
            
        }
        if(im != 0){
            sum -= (int)pow(k, im);
        }
        if(sum == 0){
            dbg("YES");
            continue;
        }
        else if(!is1){
            sum = arrsum;
            sum--;
            i = 1;
            while(sum > 0 && i <= imax){
            if(sum % (int)pow(k, i) == 0){ 
                im = i;
                i++;
            }
            else if(im != 0){
                sum -= (int)pow(k, im);
                im = 0;
            }
            else{
                i++;
            }
            
        }
        if(im != 0){
            sum -= (int)pow(k, im);
        }
        
        if(sum == 0){
            dbg("YES");
            continue;
        }
        }
        dbg("NO");
    }
}