#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> arr(n);
    int gcd = __gcd(a, b);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] % gcd;
    }
    sort(arr.begin(), arr.end());
    int ans = arr[n - 1] - arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        int range = arr[i] + gcd - arr[i + 1];
        ans = min(range, ans);
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
