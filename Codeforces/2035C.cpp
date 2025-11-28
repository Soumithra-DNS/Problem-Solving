#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    if (n == 5)
    {
        cout << "5\n2 1 3 4 5" << "\n";
        return;
    }
    else if (n == 6)
    {
        cout << "7\n1 2 4 6 5 3" << "\n";
        return;
    }
    else if (n == 7)
    {
        cout << "7\n2 4 5 1 3 6 7" << "\n";
        return;
    }
    int k = 1;
    while (k <= n)
    {
        k <<= 1;
    }
    k >>= 1;
    vector<int> ans, vis(n + 1, 0);
    ans.push_back(1);
    vis[1] = 1;
    for (int i = 3; i >= 0; i--)
    {
        ans.push_back(k - i);
        vis[k - i] = 1;
    }

    if (n & 1)
    {
        cout << n << "\n";
        ans.push_back(n);
        vis[n] = 1;
    }
    else
    {
        cout << (2 * k - 1) << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cout << i << " ";
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
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
