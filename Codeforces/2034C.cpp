#include <bits/stdc++.h>
using namespace std;
#define int long long
const int z = 1005;
int n, m;
vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};
vector<vector<int>> vis, v;
vector<string> str;

bool valid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int f(int y, int x)
{
    if (!valid(y, x))
        return 1;
    if (vis[y][x])
        return v[y][x];
    vis[y][x] = 1;

    int i = y, j = x;
    if (str[i][j] == 'U')
        i--;
    else if (str[i][j] == 'D')
        i++;
    else if (str[i][j] == 'L')
        j--;
    else if (str[i][j] == 'R')
        j++;
    else
        return 0;

    return v[y][x] = f(i, j);
}

void solve()
{
    cin >> n >> m;
    str.assign(n, "");
    v.assign(n, vector<int>(m, 0));
    vis.assign(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        if (i == 0)
        {
            for (int j = 0; j < m; j++)
            {
                if (str[i][j] == 'U')
                    v[i][j] = 1;
            }
        }
        if (i == n - 1)
        {
            for (int j = 0; j < m; j++)
            {
                if (str[i][j] == 'D')
                    v[i][j] = 1;
            }
        }
        if (str[i][0] == 'L')
            v[i][0] = 1;
        if (str[i][m - 1] == 'R')
            v[i][m - 1] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (str[i][j] != '?' && !vis[i][j])
            {
                f(i, j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 0)
            {
                bool ok = true;
                for (int k = 0; k < 4; k++)
                {
                    int ny = i + dy[k], nx = j + dx[k];
                    if (valid(ny, nx) && v[ny][nx] == 0)
                    {
                        ok = false;
                        break;
                    }
                }
                if (ok)
                    v[i][j] = 1;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 0)
                ans++;
        }
    }
    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
