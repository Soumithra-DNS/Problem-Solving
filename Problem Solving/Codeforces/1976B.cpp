#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n + 1; i++)
    {
        cin >> b[i];
    }
    long long ans = 0;
    int ter = b[n];
    bool check = false;
    int def = INT_MAX;
    int v = -1;
    for (int i = 0; i < n; i++)
    {
        ans += (abs(b[i] - a[i]));
        // cout << ans << "\n";
        if ((a[i] >= ter && b[i] <= ter) || (b[i] >= ter && a[i] <= ter))
        {
            check = true;
        }
        if (abs(a[i] - ter) < def)
        {
            v = a[i];
            def = abs(a[i] - ter);
        }
        if (abs(b[i] - ter) < def)
        {
            v = b[i];
            def = abs(b[i] - ter);
        }
    }
    // cout << ter << " " << v << "\n";
    if (check)
    {
        ans++;
    }
    else
    {
        ans += (abs(v - ter));
        ans++;
    }

    cout << ans << "\n";
}

int main()
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
