#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> v(n + 1), vis(n + 1), bit(32, 0);
    long long cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 31; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (!vis[j] && ((1 << i) & v[j]))
            {
                bit[i]++;
                vis[j] = 1;
            }
        }
    }

    for (int i = 0; i < 32; i++)
    {
        if (bit[i] > 1)
        {
            ans += ((bit[i] * (bit[i] - 1)) >> 1);
        }
    }

    cout << ans << "\n";
}

int main()
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
