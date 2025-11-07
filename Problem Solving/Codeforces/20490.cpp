#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
        {
            cnt++;
        }
    }

    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            l = i;
            break;
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (v[i] != 0)
        {
            r = i;
            break;
        }
    }
    if (l == -1 && r == -1)
    {
        cout << 0 << "\n";
        return;
    }
    for (int i = l; i <= r; i++)
    {
        if (v[i] == 0)
        {
            cout << 2 << "\n";
            return;
        }
    }
    cout << "1\n";
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
