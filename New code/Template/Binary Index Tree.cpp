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
    for (auto &x : v)
        cin >> x;
}

template <typename T>
void show(const T &container) {
    for (const auto &x : container)
        cout << x << " ";
    cout << "\n";
}

/* 
====================================================
                Fenwick Tree (BIT)
====================================================

Supports:
1) Point Update + Range Query
2) Range Update + Point Query
3) Range Update + Range Query

Indexing: 1-based
Time: O(log n)
====================================================
*/

template <typename T>
struct Fenwick {

    int n;
    vector<T> bit1, bit2;

    Fenwick(int _n = 0) {
        init(_n);
    }

    void init(int _n) {
        n = _n;
        bit1.assign(n + 1, 0);
        bit2.assign(n + 1, 0);
    }

    // reset tree
    void reset() {
        fill(all(bit1), 0);
        fill(all(bit2), 0);
    }

    // ------------------------------
    // Internal update
    // ------------------------------
    void update(vector<T> &bit, int idx, T val) {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] += val;
    }

    // ------------------------------
    // Internal query
    // ------------------------------
    T query(vector<T> &bit, int idx) {
        T sum = 0;
        for (; idx > 0; idx -= idx & -idx)
            sum += bit[idx];
        return sum;
    }

    // ====================================================
    // 1️⃣ Point Update + Range Query
    // ====================================================
    void pointUpdate(int idx, T val) {
        update(bit1, idx, val);
    }

    T prefixSum(int idx) {
        return query(bit1, idx);
    }

    T rangeSum(int l, int r) {
        return prefixSum(r) - prefixSum(l - 1);
    }

    // Build in O(n log n)
    void build(const vector<T> &arr) {
        for (int i = 1; i <= n; i++)
            pointUpdate(i, arr[i]);
    }

    // ====================================================
    // 2️⃣ Range Update + Point Query
    // ====================================================
    void rangeUpdate(int l, int r, T val) {
        update(bit1, l, val);
        update(bit1, r + 1, -val);
    }

    T pointQuery(int idx) {
        return query(bit1, idx);
    }

    // ====================================================
    // 3️⃣ Range Update + Range Query
    // ====================================================
    void rangeUpdateAdvanced(int l, int r, T val) {
        update(bit1, l, val);
        update(bit1, r + 1, -val);
        update(bit2, l, val * (l - 1));
        update(bit2, r + 1, -val * r);
    }

    T prefixSumAdvanced(int idx) {
        return query(bit1, idx) * idx - query(bit2, idx);
    }

    T rangeSumAdvanced(int l, int r) {
        return prefixSumAdvanced(r) - prefixSumAdvanced(l - 1);
    }
};


/* 
====================================================
                    Solve Function
====================================================
*/

void solve() {

    int n, q;
    cin >> n >> q;

    Fenwick<int> ft(n);

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    ft.build(arr);

    while (q--) {

        int type;
        cin >> type;

        if (type == 1) {
            int idx, val;
            cin >> idx >> val;

            int diff = val - arr[idx];
            arr[idx] = val;

            ft.pointUpdate(idx, diff);
        }
        else if (type == 2) {
            int l, r;
            cin >> l >> r;

            cout << ft.rangeSum(l, r) << "\n";
        }
    }
}


int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t; 

    while (t--)
        solve();

    return 0;
}



