#include <bits/stdc++.h>
using namespace std;
const int MAX = 100010;
vector<vector<int>> g(MAX);
vector<bool> vis(MAX, false);
vector<int> cats(MAX);
int ans = 0;
int n, m;

void dfs(int vertex, int cnt)
{
    vis[vertex] = true;
    cats[vertex] == 1 ? cnt++ : cnt = 0;

    if (cnt > m)
        return;

    if (g[vertex].size() == 1 && vis[g[vertex][0]])
    {
        ans++;
    }

    for (auto child : g[vertex])
    {
        if (!vis[child])
            dfs(child, cnt);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> cats[i];
    }

    int x, y;
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1, 0);
    cout << ans << "\n";

    return 0;
}
