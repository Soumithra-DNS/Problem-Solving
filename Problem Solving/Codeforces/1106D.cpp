#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grp;
vector<int> ans;
vector<bool> vis;

void dfs(int root)
{
    ans.push_back(root);
    vis[root] = true;
    int mn = -1;
    while (mn != INT_MAX)
    {
        mn = INT_MAX;
        for (int j = 0; j < grp[root].size(); j++)
        {
            if (!vis[grp[root][j]])
            {
                mn = min(mn, grp[root][j]);
            }
        }
        if (mn != INT_MAX)
            dfs(mn);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    grp = vector<vector<int>>(n + 1);
    vis = vector<bool>(n + 1);
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        grp[u].push_back(v);
        grp[v].push_back(u);
    }
    dfs(1);

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
