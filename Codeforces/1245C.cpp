#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve()
{
    int N = 1e5 + 5;
    vector<int> dp(N);
    dp[0] = dp[1] = 1;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'w' || s[i] == 'm')
        {
            cout << 0 << "\n";
            return;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (s[i - 1] == s[i - 2] && (s[i - 1] == 'u' || s[i - 1] == 'n'))
        {
            dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
        }
        else
        {
            dp[i] = dp[i - 1];
        }
    }

    cout << dp[n] << "\n";
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
