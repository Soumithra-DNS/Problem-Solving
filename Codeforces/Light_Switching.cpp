#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 5e5 + 9;
const int INF = 1e15;
int arr[N], t[4 * N], lazy[4 * N];

void build(int n, int st, int ed)
{
    if (st == ed)
    {
        t[n] = arr[st];
        return;
    }
    int mid = (st + ed) >> 1;
    int lc = n << 1, rc = lc | 1;
    build(lc, st, mid);
    build(rc, mid + 1, ed);
    t[n] = t[lc] + t[rc];
}

void apply_lazy(int n, int st, int ed)
{
    if (lazy[n] != 0 && lazy[n] % 2 == 1)
    {
        //cout << t[n] << " ";
        t[n] = (ed - st + 1) - t[n];
        // cout << t[n] << " " <<lazy[n] << "\n";
        // cout << st << " " << ed << "\n";
        if (st != ed)
        {
            lazy[n << 1] += lazy[n];
            lazy[(n << 1) | 1] += lazy[n];
        }
    }

    lazy[n] = 0;
}

void update(int n, int st, int ed, int l, int r, int val)
{
    apply_lazy(n, st, ed);
    if (st > r || ed < l)
    {
        return;
    }
    if (st >= l && ed <= r)
    {
        lazy[n] += val;
        apply_lazy(n, st, ed);
        return;
    }
    int mid = (st + ed) >> 1;
    int lc = n << 1, rc = lc | 1;
    update(lc, st, mid, l, r, val);
    update(rc, mid + 1, ed, l, r, val);
    t[n] = t[lc] + t[rc];
}

int query(int n, int st, int ed, int l, int r)
{
    apply_lazy(n, st, ed);
    if (st > r || ed < l)
        return 0;
    if (st >= l && ed <= r){
        return t[n];
    }
    int mid = (st + ed) >> 1;
    int lc = n << 1, rc = lc | 1;
    int maxLeft = query(lc, st, mid, l, r);
    int maxRight = query(rc, mid + 1, ed, l, r);
    return (maxLeft + maxRight);
}

void solve()
{
    memset(t, 0, sizeof t);
    memset(arr, 0, sizeof arr);
    memset(lazy, 0, sizeof lazy);
    int n, q;
    cin >> n >> q;
    build(1, 1, n);
    while (q--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 0)
        {
            update(1, 1, n, l, r, 1);
        }
        else
        {
            cout << query(1, 1, n, l, r) << "\n";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}