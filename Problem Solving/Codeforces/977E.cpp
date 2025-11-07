#include <bits/stdc++.h>
using namespace std;

const int MAX = 2000007;
vector<vector<int>> graph;
vector<bool> vis;
int cyl = 0;

bool cycle(int root, int par = 0, int first = -1)
{
    if (graph[root].size() != 2)
    {
        return false;
    }
    if (first == -1)
    {
        first = root;
    }

    vis[root] = true;
    bool valid = true;

    for (auto &child : graph[root])
    {
        if (!vis[child])
        {
            valid &= cycle(child, root, first);
        }
        else if (child != par && child == first)
        {
            return true;
        }
    }
    return valid;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    graph = vector<vector<int>>(n + 1);
    vis = vector<bool>(n + 1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cyl += cycle(i);
        }
    }

    cout << cyl << "\n";

    return 0;
}
