// Cycle detection algorithm
const int N = 1e5 + 5;
vector<int> adj[N];
int vis[N], col[N], pr[N];

void dfs(int node, int par)
{
    if (vis[node] == 2)
    {
        return;
    }
    if (vis[node] == 1)
    {
        col[node] = 1;
        int x = par;
        while (x != node)
        {
            col[x] = 1;
            x = pr[x];
        }
        return;
    }
    pr[node] = par;
    vis[node] = 1;
    for (auto child : adj[node])
    {
        if (pr[node] == child)
        {
            continue;
        }
        dfs(child, node);
    }
    vis[node] = 2;
}
