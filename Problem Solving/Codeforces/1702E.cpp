#include <bits/stdc++.h>
using namespace std;
#define int long long

int cnt = 0;
// bool dfs(int node, int color, vector<vector<int>> &adj, vector<int> &colors)
// {
//     colors[node] = color;
//     if(adj[node].size() != 2){
//         return false;
//     }

//     for (auto neighbor : adj[node])
//     {
//         if (colors[neighbor] == -1)
//         {
//             if (!dfs(neighbor, 1 - color, adj, colors))
//             {
//                 return false;
//             }
//         }
//         else if (colors[neighbor] == color)
//         {
//             return false;
//         }
//     }

//     return true;
// }

bool dfs(int node, int color, vector<vector<int>> &adj, vector<int> &colors)
{
    colors[node] = color;
    if (adj[node].size() != 2)
    {
        return false;
    }

    cnt++;
    for (auto neighbor : adj[node])
    {
        if (colors[neighbor] == -1)
        {
            if (!dfs(neighbor, 1 - color, adj, colors))
            {
                return false;
            }
        }
        else if (colors[neighbor] == color)
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<int> colors(n + 1, -1);
    bool is_bipartite = true;

    for (int i = 1; i <= n; i++)
    {
        if (colors[i] == -1)
        {
            cnt = 0;
            bool check = dfs(i, 0, adj, colors);
            // cout << cnt << "\n";
            if (cnt % 2)
                is_bipartite = false;
            if (!check)
            {
                is_bipartite = false;
                break;
            }
        }
    }

    if (is_bipartite)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
