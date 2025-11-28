#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> arr(n), pre(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }
    int ans = b * pre[n - 1];
    int prev = b * arr[0];
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, prev + (arr[i] * a) + (pre[n - 1] - pre[i] - (n - 1 - i) * arr[i]) * b);
        if (i + 1 != n)
        {
            prev += (arr[i + 1] - arr[i]) * b;
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
