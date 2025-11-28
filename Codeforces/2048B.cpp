#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int c = 2 * k - 1;
    int d = n / c;
    if (n % c != 0)
        d++;
    vector<int> v(n + 1, 0);
    int x = 1;
    for (int i = k; i <= n; i += k)
    {
        v[i] = x;
        x++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            v[i] = x;
            x++;
        }
        cout << v[i] << " ";
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
