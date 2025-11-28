#include <bits/stdc++.h>
#define ll long long
#define pb push_back
const long long mod = 1e9 + 7;
using namespace std;
int lake[1010][1010];

bool isValid(int i, int j, int n, int m)
{
    return (i >= 0 && i < n && j >= 0 && j < m && lake[i][j] != 0);
}

int dfs(int i, int j, int n, int m)
{
    int sum = lake[i][j];
    lake[i][j] = 0;
    if (isValid(i, j + 1, n, m))
    {
        sum += dfs(i, j + 1, n, m);
    }
    if (isValid(i + 1, j, n, m))
    {
        sum += dfs(i + 1, j, n, m);
    }
    if (isValid(i, j - 1, n, m))
    {
        sum += dfs(i, j - 1, n, m);
    }
    if (isValid(i - 1, j, n, m))
    {
        sum += dfs(i - 1, j, n, m);
    }

    return sum;
}

int_fast32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> lake[i][j];
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (lake[i][j] == 0)
                    continue;

                ans = max(ans, dfs(i, j, n, m));
            }
        }
        cout << ans << endl;
    }
    return 0;
}