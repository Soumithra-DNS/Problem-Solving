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


vector<int> seg, arr;
int n, len;

void build() {
    len = sqrt(n) + 1;
    seg.assign(len, 0);
    for (int i = 0; i < n; ++i) 
        seg[i / len] += arr[i];
}

int query(int l, int r) {
    int sum = 0;
    for (int i = l; i <= r;) {
        if (i % len == 0 && i + len - 1 <= r) {
            sum += seg[i / len];
            i += len;
        } else {
            sum += arr[i];
            ++i;
        }
    }
    return sum;
}

void update(int index, int value) {
    seg[index / len] += value - arr[index];
    arr[index] = value;
}

void solve() {
    int q;
    cin >> n >> q;
    arr.resize(n);
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    build();

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int ind, val;
            cin >> ind >> val;
            update(ind - 1, val);
        } else {
            int l, r;
            cin >> l >> r;
            cout << query(l - 1, r - 1) << '\n';
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}