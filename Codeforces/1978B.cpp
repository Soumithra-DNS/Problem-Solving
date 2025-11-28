#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (b < a)
    {
        cout << n * a << "\n";
    }
    else
    {
        int lim = max(b - n, a);
        int ans = b * (b + 1) / 2;
        ans = ans - (lim * (lim + 1) / 2);
        if (b - lim < n)
            ans += ((n - (b - lim)) * a);
        cout << ans << "\n";
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
