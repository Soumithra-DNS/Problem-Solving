#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    vector<vector<bool>> vis(n, vector<bool>(n, true));

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vis[i][j])
            {
                int mn = INT_MAX;
                int x = i, y = j, temp;
                for (int k = 0; k < 4; k++)
                {
                    ans += ('z' - v[x][y]);
                    mn = min(mn, ('z' - v[x][y]));
                    vis[x][y] = false;
                    temp = x;
                    x = y;
                    y = n - temp - 1;
                }
                ans -= (mn * 4);
            }
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
