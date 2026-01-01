// Cycle detection algorithm (Directed Graph)
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

// Cycle detection algorithm (undirected Graph)

const int N = 1e5 + 5;
vector<int> adj[N];
int vis[N], col[N], pr[N];

void dfs(int node)
{
    vis[node] = 1;

    for (int child : adj[node])
    {
        if (vis[child] == 0)
        {
            pr[child] = node;
            dfs(child);
        }
        else if (vis[child] == 1)
        {
            // cycle found
            col[child] = 1;
            int x = node;
            while (x != child)
            {
                col[x] = 1;
                x = pr[x];
            }
        }
    }

    vis[node] = 2;
}
