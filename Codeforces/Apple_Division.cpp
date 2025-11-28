#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int m = (1 << n) - 1;
    int ans = INT_MAX;
    for (int i = m; i >= 0; i--)
    {
        int sum = 0, sum1 = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += v[j];
            }
            else
            {
                sum1 += v[j];
            }
        }
        ans = min(ans, abs(sum - sum1));
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
