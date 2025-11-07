#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF 1e16

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> adj(n + 1);

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }

    vector<int> dist(n + 1, INF);
    int syrjala = 1;
    dist[syrjala] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, syrjala});

    while (!pq.empty())
    {
        int u = pq.top().second;
        int curr_dist = pq.top().first;
        pq.pop();
        if (dist[u] < curr_dist) continue;
        for (auto v : adj[u])
        {
            int next_node = v.first;
            int weight = v.second;

            if (dist[u] + weight < dist[next_node])
            {
                dist[next_node] = dist[u] + weight;
                pq.push({dist[next_node], next_node});
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (dist[i] == INF)
            cout << "INF ";
        else
            cout << dist[i] << " ";
    }
    cout << "\n";
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
}


