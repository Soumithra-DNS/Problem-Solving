#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(2, vector<int>(n));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int a0 = INT_MAX;
    int a1 = INT_MAX;
    int b0 = INT_MAX;
    int b1 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        a0 = min(a0, abs(arr[0][0] - arr[1][i]));
        a1 = min(a1, abs(arr[1][0] - arr[0][i]));

        b0 = min(b0, abs(arr[0][n - 1] - arr[1][i]));
        b1 = min(b1, abs(arr[1][n - 1] - arr[0][i]));
    }

    int ans = abs(arr[0][0] - arr[1][0]) + abs(arr[0][n - 1] - arr[1][n - 1]);
    ans = min(ans, abs(arr[0][0] - arr[1][n - 1]) + abs(arr[1][0] - arr[0][n - 1]));
    ans = min(ans, a0 + a1 + b0 + b1);
    ans = min(ans, abs(arr[0][0] - arr[1][0]) + b0 + b1);
    ans = min(ans, abs(arr[0][0] - arr[1][n - 1]) + b0 + a1);
    ans = min(ans, abs(arr[0][n - 1] - arr[1][0]) + a0 + b1);
    ans = min(ans, abs(arr[0][n - 1] - arr[1][n - 1]) + a0 + a1);

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