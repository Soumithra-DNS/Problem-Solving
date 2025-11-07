#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans += (arr[i] / k);
        arr[i] = arr[i] % k;
    }
    sort(arr.begin(), arr.end());
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (arr[l] + arr[r] >= k)
        {
            ans++;
            l++;
            r--;
        }
        else
        {
            l++;
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
