#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int q;
    cin >> q;
    int n = s.size();
    vector<int> vis(n, 0);
    int cnt = 0;
    for (int i = 0; i < n - 3; i++)
    {
        if (s.substr(i, 4) == "1100")
        {
            vis[i] = 1;
            vis[i + 1] = 1;
            vis[i + 2] = 1;
            vis[i + 3] = 1;
            cnt++;
            i += 2;
        }
    }
    while (q--)
    {
        int x, val;
        cin >> x >> val;
        s[i] = val + '0';
        if (vis[x] == 1)
        {
            int y = x;
            while (y >= 0 && vis[y])
            {
                y--;
            }
            y++;
            if (s.substr(y, 4) == "1100")
            {
                cout << "YES" << "\n";
            }
            else
            {
                vis[y] = 0;
                vis[y + 1] = 0;
                vis[y + 2] = 0;
                vis[y + 3] = 0;
                cnt--;
                cout << "NO" << "\n";
            }
        }
        else
        {
        }
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
