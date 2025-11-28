#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    x = (x + k - 1) / k;
    y = (y + k - 1) / k;
    cout << max(2 * x - 1, 2 * y) << "\n";
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
