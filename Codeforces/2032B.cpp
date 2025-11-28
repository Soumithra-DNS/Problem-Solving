#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n == 1 && k == 1)
    {
        cout << 1 << "\n";
        cout << 1 << "\n";
        return;
    }
    vector<int> col;
    for (int i = 3; i <= n; i += 2)
    {
        if (n % i == 0)
        {
            col.push_back(i);
        }
    }
    bool ok = false;
    int ans;
    for (auto it : col)
    {
        int x = n / it;
        int p = it / 2;
        int y = p * x;
        int z = y + x;
        int cnt = (z - y) / 2;
        cnt += y;
        cnt++;

        if (cnt == k)
        {
            ans = x;
            ok = true;
            break;
        }
    }

    if (ok == true)
    {
        cout << ans << "\n";
        int m = n / ans;
        for (int i = 1; i <= n; i += m)
            cout << i << " ";

        cout << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
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
