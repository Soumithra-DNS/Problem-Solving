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


int arr[N], t[4 * N];
vector<int> adj[N];
int st[N], en[N], dfsarr[N];
int clk = 0;

void dfs(int u, int par)
{
    clk++;
    st[u] = clk;
    dfsarr[clk] = u;
    for (auto v : adj[u])
    {
        if (v == par)
            continue;
        dfs(v, u);
    }
    en[u] = clk;
}

void build(int n, int st, int ed)
{
    if (st == ed)
    {
        t[n] = arr[dfsarr[st]];
        return;
    }
    int mid = (st + ed) >> 1;
    int lc = n << 1, rc = lc | 1;
    build(lc, st, mid);
    build(rc, mid + 1, ed);
    t[n] = t[lc] + t[rc];
}

void update(int n, int st, int ed, int ind, int val)
{
    if (st > ind || ed < ind)
        return;
    if (st == ed && st == ind)
    {
        t[n] = val;
        return;
    }
    int mid = (st + ed) >> 1;
    int lc = n << 1, rc = lc | 1;
    update(lc, st, mid, ind, val);
    update(rc, mid + 1, ed, ind, val);
    t[n] = t[lc] + t[rc];
}

int query(int n, int st, int ed, int l, int r)
{
    if (st > r || ed < l)
        return 0;
    if (st >= l && ed <= r)
        return t[n];
    int mid = (st + ed) >> 1;
    int lc = n << 1, rc = lc | 1;
    int maxL = query(lc, st, mid, l, r);
    int maxR = query(rc, mid + 1, ed, l, r);
    return (maxL + maxR);
}

void solve()
{
    clk = 0;
    memset(t, 0, sizeof t);
    memset(arr, 0, sizeof arr);
    for (int i = 0; i < N; i++)
        adj[i].clear();
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, -1);
    build(1, 1, n);
    for (int i = 0; i < m; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int s, val;
            cin >> s >> val;
            update(1, 1, n, st[s], val);
        }
        else
        {
            int s;
            cin >> s;
            cout << query(1, 1, n, st[s], en[s]) << endl;
        }
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