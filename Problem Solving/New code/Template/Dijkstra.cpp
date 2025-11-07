#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pf push_front
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(x) (int)(x).size()
#define ff first
#define ss second

const int MOD = 1e9 + 7;
const int INF = 1e18;
const ld PI = 3.141592653589793238462;
const ld EPS = 1e-9;
const int N = 3e5 + 9;

template <typename T>
void read(vector<T> &v) {
    for (auto &x : v) cin >> x;
}

template <typename T>
void show(const T &container) {
    for (const auto &x : container) cout << x << " ";
    cout << "\n";
}


int n, m;
vector<pair<int, int>> g[MAXN];

vector<int> dijkstra(int src, vector<int>& cnt) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    vector<int> dist(n + 1, INF);
    vector<bool> vis(n + 1, false);
    cnt.assign(n + 1, 0);

    dist[src] = 0;
    cnt[src] = 1;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [curDist, u] = pq.top();
        pq.pop();

        if (vis[u]) continue;
        vis[u] = true;

        for (auto& edge : g[u]) {
            int v = edge.first;
            int w = edge.second;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
                cnt[v] = cnt[u];
            } else if (dist[u] + w == dist[v]) {
                cnt[v] = (cnt[v] + cnt[u]) % MOD;
            }
        }
    }
    return dist;
}

void solve() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].emplace_back(v, w);
        g[v].emplace_back(u, w);
    }

    int src;
    cin >> src;
    vector<int> cnt;
    vector<int> dist = dijkstra(src, cnt);

    for (int i = 1; i <= n; i++) {
        cout << dist[i] << " " ;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}