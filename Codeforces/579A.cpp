#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ans = 1;
    int x = 1;
    while (x != n)
    {
        x = x << 1;
        if (x > n)
        {
            ans++;
            x = x >> 1;
            n = n - x;
            x = 1;
        }
        if (x == n)
        {
            break;
        }
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
