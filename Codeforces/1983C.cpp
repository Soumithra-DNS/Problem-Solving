#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> pf(3, vector<int>(n + 1, 0));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int val;
            cin >> val;
            pf[i][j] = pf[i][j - 1] + val;
        }
    }
    vector<int> v = {0, 1, 2};
    int target = (pf[0][n] + 2) / 3;
    vector<pair<int, int>> ans(3);
    bool check = 0;
    for (int i = 0; i < 6; i++)
    {
        int curr = 1;
        while (curr <= n && pf[v[0]][curr] < target)
            curr++;
        for (int j = curr + 1; j < n; j++)
        {
            if (pf[v[1]][j] - pf[v[1]][curr] >= target && pf[0][n] - pf[v[2]][j] >= target)
            {
                ans[v[0]] = {1, curr};
                ans[v[1]] = {curr + 1, j};
                ans[v[2]] = {j + 1, n};
                check = 1;
                cout << ans[0].first << " " << ans[0].second << " " << ans[1].first << " " << ans[1].second << " " << ans[2].first << " " << ans[2].second << "\n";
                break;
            }
        }
        next_permutation(v.begin(), v.end());
        if (check)
            break;
    }
    if (!check)
        cout << -1 << "\n";
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
