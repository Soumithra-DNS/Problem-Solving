#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i % 2 == 0)
        {
            a += v[i];
        }
        else
        {
            b += v[i];
        }
    }
    int m = n / 2;
    m = n - m;
    int x = a / m;
    int y = b / (n / 2);
    if (y != x)
    {
        cout << "NO" << "\n";
        return;
    }
    if (a % m != 0 || (b % (n / 2) != 0))
    {
        cout << "NO" << "\n";
        return;
    }
    cout << "YES" << "\n";
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
