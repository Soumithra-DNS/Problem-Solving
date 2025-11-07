#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 10;
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
    memset(t, 0, sizeof t);
    memset(arr, 0, sizeof arr);
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
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
