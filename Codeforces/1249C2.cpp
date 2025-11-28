#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> v;
template <typename T>
void show(const T &container)
{
    for (const auto &x : container)
    {
        cout << x << " ";
    }
    cout << "\n";
}

void solve()
{
    int n;
    cin >> n;
    int it = -1;
    int ans = n;
    vector<int> vis(40, 0);
    for (int i = 38; i >= 0; i--)
    {
        if (v[i] <= n)
        {
            vis[i] = 1;
            if (it == -1)
            {
                it = i;
            }
            n -= v[i];
        }
    }

    if (n != 0)
    {
        for (int i = 0; i < 39; i++)
        {
            if (vis[i] == 0)
            {
                n -= v[i];
                break;
            }
            n += v[i];
        }
        ans = ans - n;
    }
    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x = 1;
    for (int i = 0; i < 39; i++)
    {
        v.push_back(x);
        x *= 3;
    }

    // show(v);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}