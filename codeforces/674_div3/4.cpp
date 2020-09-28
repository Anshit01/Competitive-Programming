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
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    vector<int> prearr({0});
    set<int> preset({0});
    int zeros = 0;

    f(i, 0, n){
        int sum;
        if(prearr.size() == 0){
            sum = arr[i];
        }else{
            sum = prearr.back() + arr[i];
        }
        if(preset.find(sum) == preset.end()){
            preset.insert(sum);
            prearr.push_back(sum);
        }else{
            prearr = vector<int>({0});
            preset = set<int>({0});
            prearr.push_back(arr[i]);
            preset.insert(arr[i]);
            zeros++;
        }
    }

    vector<int> arrr(n);
    f(i, 0, n){
        arrr[i] = arr[n-i-1];
    }
    int zeros1 = 0;
    prearr = vector<int>({0});
            preset = set<int>({0});
    f(i, 0, n){
        int sum;
        if(prearr.size() == 0){
            sum = arrr[i];
        }else{
            sum = prearr.back() + arrr[i];
        }
        if(preset.find(sum) == preset.end()){
            preset.insert(sum);
            prearr.push_back(sum);
        }else{
            prearr = vector<int>({0});
            preset = set<int>({0});
            prearr.push_back(arrr[i]);
            preset.insert(arrr[i]);
            zeros1++;
        }
    }
    zeros = max(zeros, zeros1);
    cout << zeros << endl;
}