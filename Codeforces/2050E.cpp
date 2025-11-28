#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF LLONG_MAX

string a, b, c;
int n, m, o;
vector<vector<int>> dp;

int f(int i, int j, int k)
{
    if (k == o)
        return 0;
    if (i == n && j == m)
        return INF;

    if (dp[i][j] != -1)
        return dp[i][j];

    int costA = INF, costB = INF;

    if (i < n)
        costA = (a[i] != c[k]) + f(i + 1, j, k + 1);

    if (j < m)
        costB = (b[j] != c[k]) + f(i, j + 1, k + 1);

    return dp[i][j] = min(costA, costB);
}

void solve()
{
    cin >> a >> b >> c;
    n = a.size();
    m = b.size();
    o = c.size();
    dp.assign(n + 1, vector<int>(m + 1, -1));
    cout << f(0, 0, 0) << "\n";
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
