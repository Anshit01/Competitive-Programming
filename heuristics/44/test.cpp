#include <bits/stdc++.h>

/*
                    monuk7735
               29-09-2020 21:44:38
*/

#define MOD 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define loopr(i, a, b) for (int i = a; i >= b; i--)
#define loops(i, a, b, step) for (int i = a; i < b; i += step)
#define looprs(i, a, b, step) for (int i = a; i >= b; i -= step)
#define p(x) cout << x;
#define pln(x) cout << x << endl;
#define pret(x)        \
    cout << x << endl; \
    return;
#define pret0(x)       \
    cout << x << endl; \
    return 0;
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    double tree[n];
    int o, po = -1, c, arr[n], count = 0;
    tree[0] = 1.0f;
    loop(i, 0, n - 1)
    {
        cin >> o >> c;
        if (po != -1)
        {
            if (o != po)
            {
                loop(j, 0, count)
                {
                    tree[arr[j] - 1] = tree[po - 1] / double(count);
                }
                count = 0;
                tree[po - 1] = 0.0f;
            }
        }
        po = o;
        arr[count++] = c;
        if (i == n - 2)
        {
            loop(j, 0, count)
            {
                tree[arr[j] - 1] = tree[po - 1] / double(count);
            }
            count = 0;
            tree[po - 1] = 0.0f;
        }
    }
    loop(i, 0, n)
    {
        cout << fixed << setprecision(10) << tree[i] << " ";
    }
}