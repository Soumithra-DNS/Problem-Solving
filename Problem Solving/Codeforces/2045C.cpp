#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s, p;
    cin >> s >> p;
    int n = s.size();
    int m = p.size();
    vector<vector<int>> a(30);
    vector<int> vis(30, 0);
    for (int i = m - 2; i >= 0; i--)
    {
        a[p[i] - 'a'].push_back(i);
    }
    int sz = INT_MAX;
    string ans = "";
    for (int i = 1; i < n; i++)
    {
        // cout << i << "\n";
        if (!vis[s[i] - 'a'])
            for (auto it : a[s[i] - 'a'])
            {
                // cout << it << " ";
                int ln = i + m - it;
                if (ln < sz)
                {
                    sz = ln;
                    ans = s.substr(0, i);
                    ans += p.substr(it, m - it);
                }
                vis[s[i] - 'a'] = 1;
            }
        // cout << "\n";
    }
    if (ans == "")
    {
        cout << -1 << "\n";
        return;
    }
    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
