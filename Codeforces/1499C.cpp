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

    int ans = (arr[0] + arr[1]) * n;
    int a = arr[0], b = arr[1];
    int cost = arr[0], x = 1, y = 0;

    for (int i = 1; i < n; i++)
    {
        cost += arr[i];
        if (i % 2)
        {
            b = min(b, arr[i]);
            y++;
        }
        else
        {
            a = min(a, arr[i]);
            x++;
        }

        ans = min(ans, cost + (n - x) * a + (n - y) * b);
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
