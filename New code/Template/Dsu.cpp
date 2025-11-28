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

vector<int> par(N), sz(N), rnk(N, 0);

void make_set(int v) {
    par[v] = v;
    rnk[v] = 0;
    sz[v] = 1;
}

int find_set(int v) {
    if (v == par[v])
        return v;
    return par[v] = find_set(par[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b])
            swap(a, b);
        par[b] = a;
        sz[a] += sz[b];
        // Union by Rank (Alternative to Union by Size)
        // if (rnk[a] < rnk[b])
        //     swap(a, b);
        // par[b] = a;
        // if (rnk[a] == rnk[b])
        //     rnk[a]++;
    }
}

void solve() {

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) make_set(i);
    while (m--) {
        int u, v;
        cin >> u >> v;
        union_sets(u, v);
    }


}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
