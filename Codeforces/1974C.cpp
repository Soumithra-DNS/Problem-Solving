#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<pair<pair<int, int>, int>, int> mp;
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (mp[{{0, arr[i + 1]}, arr[i + 2]}] != 0)
        {
            ans += (mp[{{0, arr[i + 1]}, arr[i + 2]}] - mp[{{arr[i], arr[i + 1]}, arr[i + 2]}]);
        }
        mp[{{0, arr[i + 1]}, arr[i + 2]}]++;
        // cout << ans << i<<"\n";

        if (mp[{{arr[i], 0}, arr[i + 2]}] != 0)
        {
            ans += (mp[{{arr[i], 0}, arr[i + 2]}] - mp[{{arr[i], arr[i + 1]}, arr[i + 2]}]);
        }
        mp[{{arr[i], 0}, arr[i + 2]}]++;
        // cout << ans << i<<"\n";

        if (mp[{{arr[i], arr[i + 1]}, 0}] != 0)
        {
            // cout << mp[{{arr[i], arr[i + 1]}, arr[i + 2]}] << i<<"\n";
            ans += (mp[{{arr[i], arr[i + 1]}, 0}] - mp[{{arr[i], arr[i + 1]}, arr[i + 2]}]);
        }
        mp[{{arr[i], arr[i + 1]}, 0}]++;

        mp[{{arr[i], arr[i + 1]}, arr[i + 2]}]++;
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
