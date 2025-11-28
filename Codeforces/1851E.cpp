#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
vector<int> cost(N);
vector<int> adj[N];
vector<bool> vis(N, false);

void dfs(int node)
{
    vis[node] = true;
    bool hasChild = false;
    int sum = 0;
    for (auto child : adj[node])
    {
        hasChild = true;
        if (!vis[child])
        {
            dfs(child);
        }
        sum += cost[child];
    }
    if (!hasChild)
    {
        sum = 1e18;
    }
    cost[node] = min(cost[node], sum);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vis.assign(n + 5, false);

    for (int i = 0; i <= n; i++)
    {
        adj[i].clear();
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> cost[i];
    }

    for (int i = 1; i <= k; i++)
    {
        int x;
        cin >> x;
        cost[x] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        for (int j = 1; j <= m; j++)
        {
            int y;
            cin >> y;
            adj[i].push_back(y);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << cost[i] << " ";
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
