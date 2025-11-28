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
    t[n] = max(t[lc], t[rc]);
}

// Update a value in the segment tree
void update(int n, int st, int ed, int ind, int val) {
    if (st > ind || ed < ind) return;
    if (st == ed && st == ind) {
        t[n] = val;
        return;
    }
    int mid = (st + ed) >> 1; 
    int lc = n << 1, rc = lc | 1;
    update(lc, st, mid, ind, val);
    update(rc, mid + 1, ed, ind, val);
    t[n] = max(t[lc], t[rc]);
}

// Query the maximum in a range [l, r]
int query(int n, int st, int ed, int l, int r) {
    if (st > r || ed < l) return -INF;
    if (st >= l && ed <= r) return t[n];
    int mid = (st + ed) >> 1; 
    int lc = n << 1, rc = lc | 1;
    int maxL = query(lc, st, mid, l, r);
    int maxR = query(rc, mid + 1, ed, l, r);
    return max(maxL, maxR);
}

// Solve the problem using the segment tree for a single test case
void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    build(1, 1, n);

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int ind, val;
            cin >> ind >> val;
            update(1, 1, n, ind, val);
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