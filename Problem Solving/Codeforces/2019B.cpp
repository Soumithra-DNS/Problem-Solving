#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n), b(q);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int in = ((i + 1) * (n - i)) - 1;
        mp[in]++;
        if (i == n - 1)
            continue;
        if (v[i] + 1 == v[i + 1])
            continue;
        int out = (i + 1) * (n - i - 1);

        mp[out] += (v[i + 1] - v[i] - 1);
    }
    for (int i = 0; i < q; i++)
    {
        int b;
        cin >> b;
        cout << mp[b] << " ";
    }

    cout << "\n";
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
