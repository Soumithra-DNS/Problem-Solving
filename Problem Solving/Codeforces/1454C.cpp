#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n + 1);
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v[x].push_back(i);
    }
    int ans = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (v[i].size() != 0)
        {
            int cnt = 0;
            if (v[i][0] != 1)
            {
                cnt++;
            }
            for (int j = 0; j < v[i].size() - 1; j++)
            {
                if (v[i][j + 1] - v[i][j] > 1)
                {
                    cnt++;
                }
            }
            if (v[i][v[i].size() - 1] != n)
            {
                cnt++;
            }
            ans = min(ans, cnt);
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
