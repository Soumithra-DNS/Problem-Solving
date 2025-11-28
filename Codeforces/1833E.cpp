#include <bits/stdc++.h>
using namespace std;
#define int long long

bool dfs(int node, int parent, vector<set<int>> &adj, vector<int> &vis)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (dfs(it, node, adj, vis))
            {
                return true;
            }
        }
        else if (it != parent)
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;

    vector<set<int>> adj(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        adj[i].insert(v);
        adj[v].insert(i);
    }

    vector<int> vis(n + 1, 0);
    int total_cycle = 0;
    int complete_cycle = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            total_cycle++;
            if (dfs(i, -1, adj, vis))
            {
                complete_cycle++;
            }
        }
    }
    if (complete_cycle < total_cycle)
    {
        complete_cycle++;
    }

    cout << complete_cycle << " " << total_cycle << "\n";
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
