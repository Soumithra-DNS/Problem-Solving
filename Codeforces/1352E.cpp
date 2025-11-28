#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int mx = -1;
    // map<int, int> mp;
    vector<int> arr(n);
    vector<int> mp(n + 2);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        mx = max(mx, arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum > mx)
            {
                break;
            }
            if (j > i)
            {
                ans += mp[sum];
                mp[sum] = 0;
            }
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
