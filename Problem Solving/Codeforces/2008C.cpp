#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int l, r;
    cin >> l >> r;
    int n = r - l + 1;
    int L = 0, R = n;
    while (L <= R)
    {
        int mid = (L + R) / 2;
        int total = (mid * (mid + 1)) / 2;
        if (n - total >= mid + 2)
        {
            L = mid + 1;
        }
        else
        {
            R = mid - 1;
        }
    }
    cout << R + 2 << "\n";
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
