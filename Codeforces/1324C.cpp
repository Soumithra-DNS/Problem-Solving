#include <bits/stdc++.h>
#define ll long long
#define pb push_back
const long long mod = 1e9 + 7;
using namespace std;

void solve()
{
    string str;
    cin >> str;

    int d = 0;
    int ct = 0;
    for (int i = 0; i < str.size(); i++)
    {
        ct++;
        if (str[i] == 'R')
        {
            d = max(d, ct);
            ct = 0;
        }
    }
    ct++;
    d = max(d, ct);
    cout << d << endl;
}

int_fast32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}