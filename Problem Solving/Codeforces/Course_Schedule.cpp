#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 3e5 + 9;
const int INF = 1e18;
const int MOD = 998244353;

int n, m;
vector<int> adj[N];
vector<int> vis(N, 0);
vector<int> indeg(N, 0);
vector<int> topsort;

void bfs()
{
    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        topsort.push_back(node);
        for (auto it : adj[node])
        {
            indeg[it]--;
            if (indeg[it] == 0)
            {
                q.push(it);
            }
        }
    }
}

void solve()
{
    cin >> n >> m;

    topsort.clear();
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
        indeg[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].emplace_back(v);
        indeg[v]++;
    }

    bfs();

    if ((int)topsort.size() < n)
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        for (int it : topsort)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
