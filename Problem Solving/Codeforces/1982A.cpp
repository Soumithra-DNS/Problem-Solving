#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a <= b)
    {
        if (c >= d)
        {
            cout << "NO" << "\n";
            return;
        }
    }
    else
    {
        if (d >= c)
        {
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
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
