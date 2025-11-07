#include <bits/stdc++.h>
using namespace std;

#define int long long
const int mod = 1e9 + 7;

const int N = 1e5 + 5;
int t[4 * N], lazy[4 * N];

void build(int n, int st, int ed) {
    if (st == ed) {
        t[n] = 1;
        lazy[n] = 1;
        return;
    }
    int mid = (st + ed) >> 1;
    int lc = n << 1, rc = lc | 1;
    build(lc, st, mid);
    build(rc, mid + 1, ed);
    t[n] = (t[lc] + t[rc]) % mod;
    lazy[n] = 1;
}

void apply_lazy(int n, int st, int ed) {
    if (lazy[n] != 1) {
        t[n] = (t[n] * lazy[n]) % mod;
        if (st != ed) {
            lazy[n << 1] = (lazy[n << 1] * lazy[n]) % mod;
            lazy[(n << 1) | 1] = (lazy[(n << 1) | 1] * lazy[n]) % mod;
        }
        lazy[n] = 1;
    }
}

void update(int n, int st, int ed, int l, int r, int val) {
    apply_lazy(n, st, ed);
    if (st > r || ed < l) return;
    if (st >= l && ed <= r) {
        lazy[n] = (lazy[n] * val) % mod;
        apply_lazy(n, st, ed);
        return;
    }
    int mid = (st + ed) >> 1;
    int lc = n << 1, rc = lc | 1;
    update(lc, st, mid, l, r, val);
    update(rc, mid + 1, ed, l, r, val);
    t[n] = (t[lc] + t[rc]) % mod;
}

int query(int n, int st, int ed, int l, int r) {
    apply_lazy(n, st, ed);
    if (st > r || ed < l) return 0;
    if (st >= l && ed <= r) return t[n];
    int mid = (st + ed) >> 1;
    int lc = n << 1, rc = lc | 1;
    int leftSum = query(lc, st, mid, l, r);
    int rightSum = query(rc, mid + 1, ed, l, r);
    return (leftSum + rightSum) % mod;
}

void solve() {
    int n, m;
    cin >> n >> m;
    build(1, 1, n);
    while (m--) {
        int type, l, r, v;
        cin >> type >> l >> r;
        if (type == 1) {
            cin >> v;
            update(1, 1, n, l + 1, r, v);
        } else if (type == 2) {
            cout << query(1, 1, n, l + 1, r) << "\n";
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
