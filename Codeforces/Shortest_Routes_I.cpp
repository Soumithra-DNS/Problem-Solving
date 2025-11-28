#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 3e5 + 9;
const int INF = 1e18;
const int MOD = 998244353;

int n, m;
vector<pair<int, int>> g[N];

vector<int> dijkstra(int src, vector<int> &cnt)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    vector<int> dist(n + 1, INF);
    vector<bool> vis(n + 1, false);
    cnt.assign(n + 1, 0);

    dist[src] = 0;
    cnt[src] = 1;
    pq.emplace(0, src);

    while (!pq.empty())
    {
        auto top = pq.top();
        pq.pop();
        int curDist = top.first;
        int u = top.second;

        if (vis[u])
            continue;
        vis[u] = true;

        for (auto &edge : g[u])
        {
            int v = edge.first;
            int w = edge.second;
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.emplace(dist[v], v);
                cnt[v] = cnt[u];
            }
            else if (dist[u] + w == dist[v])
            {
                cnt[v] = (cnt[v] + cnt[u]) % MOD;
            }
        }
    }
    return dist;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].emplace_back(v, w);
        //g[v].emplace_back(u, w); 
    }

    // int src;
    // cin >> src;
    vector<int> cnt;
    vector<int> dist = dijkstra(1, cnt);

    for(int i = 1; i <= n; i++){
        cout << dist[i] << " ";
    }


    return 0;
}
