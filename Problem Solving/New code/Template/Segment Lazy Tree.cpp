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


int arr[N], t[4 * N], lazy[4 * N];

// Build the segment tree
void build(int n, int st, int ed) {
    if (st == ed) {
        t[n] = arr[st];
        return;
    }
    int mid = (st + ed) >> 1; 
    int lc = n << 1, rc = lc | 1;
    build(lc, st, mid);
    build(rc, mid + 1, ed);
    t[n] = t[lc] + t[rc];
}

// Apply lazy updates
void apply_lazy(int n, int st, int ed) {
    if (lazy[n] != 0) {
        t[n] += (ed - st + 1) * lazy[n];
        if (st != ed) {
            lazy[n << 1] += lazy[n];
            lazy[(n << 1) | 1] += lazy[n];
        }
        lazy[n] = 0;
    }
}

// Update a range with lazy propagation
void update(int n, int st, int ed, int l, int r, int val) {
    apply_lazy(n, st, ed);
    if (st > r || ed < l) return;
    if (st >= l && ed <= r) {
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

// Query a range with lazy propagation
int query(int n, int st, int ed, int l, int r) {
    apply_lazy(n, st, ed);
    if (st > r || ed < l) return 0;
    if (st >= l && ed <= r) return t[n];
    int mid = (st + ed) >> 1; 
    int lc = n << 1, rc = lc | 1;
    int leftQuery = query(lc, st, mid, l, r);
    int rightQuery = query(rc, mid + 1, ed, l, r);
    return leftQuery + rightQuery;
}

// Solve the problem using the segment tree with lazy propagation
void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    build(1, 1, n);
    memset(lazy, 0, sizeof lazy);

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r, val;
            cin >> l >> r >> val;
            update(1, 1, n, l, r, val);
        } else {
            int l, r;
            cin >> l >> r;
            cout << query(1, 1, n, l, r) << '\n';
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        memset(t, 0, sizeof t);
        memset(arr, 0, sizeof arr);
        solve();
    }
    return 0;
}