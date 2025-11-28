#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    //vector<pair<int, int>> V;
    vector<int> vis(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        //V.push_back(make_pair(u, v));
        vis[u] = 1;
        vis[v] = 1;
    }
    int cen = -1;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cen = i;
            break;
        }
    }
    cout << n - 1 << "\n";
    for (int i = 1; i <= n; i++)
    {
        if (i == cen)
            continue;
        cout << cen << " " << i << "\n";
    }
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
