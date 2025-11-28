#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int a1 = 0, a2 = 0;
    int mn1 = INT_MAX;
    int mn2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            a1++;
            mn1 = min(mn1, i);
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (t[i] == 'a')
        {
            a2++;
            mn2 = min(mn2, i);
        }
    }

    if (a1 != a2)
    {
        cout << "NO" << "\n";
        return;
    }
    if (a1 == 0 && a2 == 0 && s != t)
    {
        cout << "NO" << "\n";
        return;
    }
    if (mn1 != mn2)
    {
        cout << "NO" << "\n";
        return;
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
