/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        int n = s.size();
        vector<int> arr;
        bool prev1 = false;
        int len = 0;
        f(i, 0, n){
            if(prev1){
                if(s[i] == '1'){
                    len++;
                }else{
                    prev1 = false;
                    arr.push_back(len);
                    len = 0;
                }
            }else{
                if(s[i] == '1'){
                    len = 1;
                    prev1 = true;
                }else{

                }
            }
        }
        if(len > 0){
            arr.push_back(len);
        }
        int sum = 0;
        sort(arr.begin(), arr.end(), greater<int>());
        for(int i = 0; i < arr.size(); i += 2){
            sum += arr[i];
        }
        cout << sum << endl;
    }
}