#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int odd = 0;
    int even = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i % 2)
            {
                odd++;
            }
            else
            {
                even++;
            }
            int x = n / i;
            if (x % 2)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
    }
    int ans = 0;
    if (odd < even)
    {
        ans = 1;
    }
    else if (odd > even)
    {
        ans = -1;
    }
    else
    {
        ans = 0;
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
