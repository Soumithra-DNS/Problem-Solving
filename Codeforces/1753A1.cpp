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

    if (n % 2)
    {
        cout << -1 << "\n";
        return;
    }

    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] == arr[i + 1])
        {
            ans.push_back({i + 1, i + 2});
        }
        else
        {
            ans.push_back({i + 1, i + 1});
            ans.push_back({i + 2, i + 2});
        }
    }

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << "\n";
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
