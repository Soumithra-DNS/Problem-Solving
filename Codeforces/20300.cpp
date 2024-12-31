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
    sort(arr.begin(), arr.end());
    if (n >= 2)
    {
        swap(arr[0], arr[1]);
        swap(arr[0], arr[n - 1]);
    }
    int mn = arr[0], mx = arr[0];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
        ans += (mx - mn);
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
