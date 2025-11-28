#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, r;
    cin >> n >> r;
    vector<int> arr(n);
    int cnt = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cnt += (arr[i] / 2);
        arr[i] = arr[i] % 2;
        sum += arr[i];
    }
    int ans = cnt * 2;
    r -= cnt;
    r *= 2;
    if (sum < (r / 2))
    {
        ans += sum;
    }
    else
        ans += (r - sum);
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
