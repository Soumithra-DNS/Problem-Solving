#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, w, b;
    cin >> n >> w >> b;
    if (n == 0)
    {
        cout << 1 << "\n";
        return;
    }
    if (w == 0 && b == 0)
    {
        cout << 0 << "\n";
        return;
    }
    if (w == 0)
    {
        int x = n % b;
        cout << (bool)(!x) << "\n";
        return;
    }
    if (b == 0)
    {
        int x = n % w;
        cout << (bool)(!x) << "\n";
        return;
    }
    int ans = 0;
    for (int i = 0; i <= n; i += w)
    {
        int x = n - i;
        if (x % b == 0)
            ans++;
    }

    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
