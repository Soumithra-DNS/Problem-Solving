#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int mx = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        mx = max(mx, arr[i]);
    }
    int ans = max(mx, (sum + k - 1) / k);
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
