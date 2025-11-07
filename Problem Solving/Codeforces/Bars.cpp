#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int tar, n;
    cin >> tar >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int m = (1 << n) - 1;
    for (int i = m; i >= 0; i--)
    {
        int sum = 0;
        for (int j = 0; j < 31; j++)
        {
            if (i & (1 << j))
            {
                sum += v[j];
            }
        }
        if (sum == tar)
        {
            cout << "YES" << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
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
