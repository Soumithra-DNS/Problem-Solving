#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int q, m;
    cin >> q >> m;
    int prev = 0, L = m, R = m;
    bool ok = true;
    while (q--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        L = L - (t - prev);
        R = R + (t - prev);
        if (r < L || l > R)
        {
            ok = false;
        }
        prev = t;
        L = max(L, l);
        R = min(R, r);
    }
    if (ok)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
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
