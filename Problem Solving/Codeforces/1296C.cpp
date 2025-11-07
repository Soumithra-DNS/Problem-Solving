#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, x = 0, y = 0;
    string s;
    cin >> n >> s;
    s = " " + s;
    map<pair<int, int>, int> mp;
    int ans = INT_MAX;
    int r = 0;
    int l = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            x--;
        }
        if (s[i] == 'R')
        {
            x++;
        }
        if (s[i] == 'U')
        {
            y++;
        }
        if (s[i] == 'D')
        {
            y--;
        }
        if (mp[{x, y}] != 0 || (x == 0 && y == 0))
        {
            if (ans > i - mp[{x, y}])
            {
                ans = i - mp[{x, y}];
                l = mp[{x, y}] + 1;
                r = i;
            }
        }
        mp[{x, y}] = i;
    }
    if (ans == INT_MAX)
    {
        cout << "-1" << '\n';
    }
    else
    {
        cout << l << " " << r << '\n';
    }

    return;
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
