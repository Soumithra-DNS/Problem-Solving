#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        cout << "YES" << "\n";
        cout << 1 << "\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        bool c = 1;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (abs(v[i] - v[j]) % k == 0)
            {
                c = 0;
            }
        }
        if (c)
        {
            cout << "YES" << "\n";
            cout << i + 1 << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
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
