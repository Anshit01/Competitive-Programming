#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int myAtoi(string str){
    long long num = 1;
    bool is_negative = false;
    bool is_num = false;
    int len = str.length();
    int i = 0;
    for(; i < len; i++){
        if(str[i] >= '0' and str[i] <= '9'){
            is_num = true;
            if(i > 0) if(str[i-1] == '-') is_negative = true;
            break;
        }
        if(str[i] == '-' or str[i] == '+'){
            if(str[i+1] >= '0' and str[i+1] <= '9'){
                is_num = true;
                if(str[i] == '-') is_negative = true;
                i++;
                break;
            }
            else{
                return 0;
            }
        }
        if(str[i] != ' '){
            return 0;
        }
    }
    for(; i < len; i++){
        if(str[i] != '0'){
            break;
        }
    }
    if(!is_num or i >= len or str[i] < '0' or str[i] > '9'){
        return 0;
    }
    num *= str[i] - '0';
    i++;
    for(; i < len and str[i] >= '0' and str[i] <= '9'; i++){
        num *= 10;
        num += int(str[i] - '0');
        if(num > INT32_MAX) break;
    }
    if(is_negative) num = -num;
    if(num < INT32_MIN) num = INT32_MIN;
    if(num > INT32_MAX) num = INT32_MAX;
    return num;
}

int main(){
    ios::sync_with_stdio(0);
    string s;
    cin >> s;
    cout << myAtoi(s);
}