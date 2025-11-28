#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m = 3, k = 2;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int ans = 0;
    int last = 0;

    for (int fast = 0; fast < n; fast++)
    {
        while (last < n && arr[last] - arr[fast] <= k)
        {
            last++;
        }
        int range = last - fast - 1;

        ans += (range * (range - 1)) / 2;
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
