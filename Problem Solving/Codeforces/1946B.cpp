#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<long long> v(n), v1(n);
    long long sum = 0, mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
        {
            v1[i] = v[i];
        }
        else
        {
            v1[i] = v1[i - 1] + v[i];
        }
        mn = min(mn, v1[i]);
        mx = max(mx, v1[i] - mn);
        mx = max(mx, v1[i]);
    }

    sum = v1[n - 1] % mod;
    mx = mx % mod;

    for (int i = 0; i < k; i++)
    {
        sum = (sum + mx) % mod;
        mx = (mx * 2) % mod;
    }
    
    if (sum < 0)
    {
        sum = (sum + mod) % mod;
    }
    cout << sum << "\n";
}

int main()
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
