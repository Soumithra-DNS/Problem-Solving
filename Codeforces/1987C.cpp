#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] > v[i + 1])
        {
            ans = max(ans, v[i]);
        }
        else if (v[i] <= v[i + 1])
        {
            ans++;
        }
    }

    cout << ans << "\n";
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
