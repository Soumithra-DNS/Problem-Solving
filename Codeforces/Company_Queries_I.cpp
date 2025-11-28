#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 10;
vector<int> adj[N];
vector<vector<int>> ancestor(N, vector<int>(20, -1));

void dfs(int u, int par)
{
    if (par != -1)
    {
        ancestor[u][0] = par;
        for (int i = 1; i < 20; i++)
        {
            int v = ancestor[u][i - 1];
            if (v == -1)
                break;
            ancestor[u][i] = ancestor[v][i - 1];
        }
    }

    for (int v : adj[u])
    {
        if (v == par)
            continue;
        dfs(v, u);
    }
}

int getAncestor(int u, int k)
{
    for (int i = 0; i < 20; i++)
    {
        if ((k & (1 << i)))
        {
            u = ancestor[u][i];
            if (u == -1)
                return -1;
        }
    }
    return u;
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
    // for(int i = 0; i < 10; i++){
    //     for(int j = 0; j < 20; j++){
    //         cout << ancestor[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    for (int i = 0; i < m; i++)
    {
        int u, k;
        cin >> u >> k;
        cout << getAncestor(u, k) << "\n";
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
