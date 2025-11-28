#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1), vis(n + 2, -1), ans(n + 2, INT_MAX);
    vector<vector<int>> pos(n + 2, vector<int>(1, -1));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pos[arr[i]].push_back(i);
    }

    for (int i = 1; i <= n; i++)
    {

        int mx = -1;
        int m = pos[i].size();
        for (int j = 1; j < m; j++)
        {
            mx = max(mx, pos[i][j] - pos[i][j - 1]);
        }
        mx = max(mx, n - pos[i][m - 1]);
        ans[mx] = min(ans[mx], i);
    }
    for (int i = 1; i <= n; i++)
    {
        ans[i] = min(ans[i - 1], ans[i]);
        if (ans[i] == INT_MAX)
        {
            cout << -1 << " ";
        }
        else
            cout << ans[i] << " ";
    }
    cout << "\n";
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
