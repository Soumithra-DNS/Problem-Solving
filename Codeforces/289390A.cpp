#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
vector<int> par(N), sz(N), rnk(N, 0);

void make_set(int v)
{
    par[v] = v;
    rnk[v] = 0;
    sz[v] = 1;
}

int find_set(int v)
{
    if (v == par[v])
        return v;
    return par[v] = find_set(par[v]);
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    // union by Size
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        par[b] = a;
        sz[a] += sz[b];
    }

    // union by Rank

    // if (a != b) {
    //     if (rnk[a] < rnk[b])
    //         swap(a, b);
    //     par[b] = a;
    //     if (rnk[a] == rnk[b])
    //         rnk[a]++;
    // }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        make_set(i);
    }
    while (m--)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        if (s == "union")
        {
            union_sets(a, b);
        }
        else
        {
            if (find_set(a) == find_set(b))
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
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
