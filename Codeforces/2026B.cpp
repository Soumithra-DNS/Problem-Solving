#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 2, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    arr[n + 1] = arr[n] + 1;

    int mn1 = INT_MIN;
    int mn2 = INT_MIN;
    for (int i = 0; i < n; i += 2)
    {
        mn1 = max(mn1, abs(arr[i + 1] - arr[i]));
    }

    for (int i = 1; i <= n; i += 2)
    {
        mn2 = max(mn2, abs(arr[i + 1] - arr[i]));
    }

    if (n % 2 == 0)
    {
        mn1 = INT_MAX;
    }
    cout << min(mn1, mn2) << "\n";
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
