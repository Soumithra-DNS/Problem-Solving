// Directed Graph Cycle Detection (DFS Template)

const int N = 1e5 + 5;
vector<int> adj[N];
int vis[N], col[N], pr[N];

bool hasCycle = false;

void dfs(int node)
{
    vis[node] = 1;

    for (int child : adj[node])
    {
        if (vis[child] == 0)
        {
            pr[child] = node;
            dfs(child);
            if (hasCycle)
                return;
        }
        else if (vis[child] == 1)
        {
            hasCycle = true;

            // mark cycle nodes
            col[child] = 1;
            for (int x = node; x != child; x = pr[x])
                col[x] = 1;

            return;
        }
    }

    vis[node] = 2;
}

// Undirected Graph Cycle Detection (DFS Template)

const int N = 1e5 + 5;
vector<int> adj[N];
int vis[N], col[N], pr[N];

bool hasCycle = false;

void dfs(int node, int parent)
{
    vis[node] = 1;
    pr[node] = parent;

    for (int child : adj[node])
    {
        if (child == parent)
            continue;

        if (vis[child] == 0)
        {
            dfs(child, node);
            if (hasCycle)
                return;
        }
        else if (vis[child] == 1)
        {
            hasCycle = true;

            // mark cycle nodes
            col[child] = 1;
            for (int x = node; x != child; x = pr[x])
                col[x] = 1;

            return;
        }
    }

    vis[node] = 2;
}
