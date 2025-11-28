#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    while (k > 0 && x != 1)
    {
        int z = (x / y + 1) * y - x;
        z = min(z, k);
        x += z;
        k -= z;

        while (x % y == 0)
        {
            x = x / y;
        }
    }

    cout << x + k % (y - 1) << "\n";
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
