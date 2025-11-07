#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> graph[1000007];
map<int, bool> mp;
int n, a, b;
bool check;

void dfs0(int root, int par, int x)
{
    if (root == b)
        return;
    mp[x] = true;
    for (auto &child : graph[root])
    {
        if (child.first != par)
        {
            dfs0(child.first, root, child.second ^ x);
        }
    }
}

void dfs1(int root, int par, int x)
{
    if (mp[x] && root != b)
    {
        check = true;
    }
    for (auto &child : graph[root])
    {
        if (child.first != par)
        {
            dfs1(child.first, root, child.second ^ x);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        for (int i = 0; i <= n; i++)
        {
            graph[i].clear();
        }
        mp.clear();
        check = false;

        for (int i = 1; i < n; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back({v, w});
            graph[v].push_back({u, w});
        }
        dfs0(a, -1, 0);
        dfs1(b, -1, 0);

        if (check)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
