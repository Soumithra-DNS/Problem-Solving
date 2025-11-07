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


vector<int> adj[N];
vector<int> indeg;
vector<int> topsort;

void bfs(int n)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 1; i <= n; i++)
    {
        if (indeg[i] == 0)
        {
            pq.push(i);
        }
    }

    while (!pq.empty())
    {
        int node = pq.top();
        pq.pop();
        topsort.push_back(node);
        for (auto it : adj[node])
        {
            indeg[it]--;
            if (indeg[it] == 0)
            {
                pq.push(it);
            }
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    indeg.assign(n + 1, 0);
    topsort.clear();
    for (int i = 1; i <= n; i++)
        adj[i].clear();

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].emplace_back(v);
        indeg[v]++;
    }

    bfs(n);

    if ((int)topsort.size() < n)
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        for (int it : topsort)
        {
            cout << it << " ";
        }
        cout << "\n";
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
