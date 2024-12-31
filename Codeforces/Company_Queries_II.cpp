#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 10;
vector<int> adj[N];
vector<vector<int>> anc(N, vector<int>(20, -1));
vector<int> dept(N, 0);

void dfs(int u, int par)
{
    if (par != -1)
    {
        dept[u] = dept[par] + 1;
        anc[u][0] = par;
        for (int i = 1; i < 20; i++)
        {
            int v = anc[u][i - 1];
            if (v == -1)
                break;
            anc[u][i] = anc[v][i - 1];
        }
    }

    for (int v : adj[u])
    {
        if (v == par)
            continue;
        dfs(v, u);
    }
}

int getAnc(int u, int k)
{
    for (int i = 0; i < 20; i++)
    {
        if ((k & (1 << i)))
        {
            u = anc[u][i];
            if (u == -1)
                return -1;
        }
    }
    return u;
}

int lca(int u, int v)
{
    if (dept[u] > dept[v])
        u = getAnc(u, dept[u] - dept[v]);
    if (dept[v] > dept[u])
        v = getAnc(v, dept[v] - dept[u]);

    if (u == v)
        return u;

    for (int i = 20; i >= 0; i--)
    {
        if (anc[u][i] == anc[v][i])
            continue;
        u = anc[u][i];
        v = anc[v][i];
    }
    return anc[u][0];
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 2; i <= n; i++)
    {
        int boss;
        cin >> boss;
        adj[i].push_back(boss);
        adj[boss].push_back(i);
    }
    dfs(1, -1);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        cout << lca(u, v) << "\n";
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