#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    if (one > 0)
    {
        zero = 0;
    }
    if (one % 2 == 0)
    {
        one = 0;
    }
    else
    {
        one = 1;
    }

    cout << zero + one << "\n";
}

int32_t main()
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
