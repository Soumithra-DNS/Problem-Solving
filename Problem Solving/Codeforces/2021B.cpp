#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, x;
    cin >> n >> x;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mp[val]++;
    }
    auto it = mp.begin();
    int prev = -1;
    while (it != mp.end())
    {
        // cout << it->first << " ";
        if (it->first - prev > 1)
        {
            cout << prev + 1 << "\n";
            return;
        }
        if (it->second > 1)
        {
            mp[it->first + x] += (it->second - 1);
        }
        prev = it->first;
        it++;
    }
    cout << prev + 1 << "\n";
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
