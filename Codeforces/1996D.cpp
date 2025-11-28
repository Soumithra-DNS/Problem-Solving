#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, x;
    cin >> n >> x;
    int ans = 0;
    for (int a = 1; a <= min(n, x); a++)
    {
        for (int b = 1; a * b <= n && a + b <= x; b++)
        {
            int tt = min(x - (a + b), (n - (a * b)) / (a + b));
            ans += tt;
        }
    }

    cout << ans << "\n";
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
