#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e3 + 2;

int modExp(int x, int y)
{
    int result = 1;
    while (y > 0)
    {
        if (y % 2 == 1)
        {
            result = (result * x) % mod;
        }
        x = (x * x) % mod;
        y /= 2;
    }
    return result;
}

void solve()
{
    int n;
    cin >> n;
    int arr[2][n + 1];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans;
    for (int i = 0; i < n; i++)
    {
        ans = (modExp(2, arr[1][i])) % mod;
        cout << ans << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
