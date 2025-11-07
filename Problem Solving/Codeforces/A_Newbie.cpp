#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= -1)
        {
            x = abs(x);
            mp[x + 105]++;
        }
        else
        {
            mp[x]++;
            // cout << x << " ";
        }
    }

    int ans = mp.size();
    for (auto it : mp)
    {
        // cout << it.first << " ";
        if (it.first == 0)
        {
            continue;
        }
        if (it.second > 1 && it.first < 105 && mp[it.first + 105] == 0)
        {
            ans++;
        }
        else if (it.second > 1 && it.first >= 105 && mp[it.first - 105] == 0)
        {
            ans++;
        }
    }

    cout << ans << "\n";
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
