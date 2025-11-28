#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a >= b)
    {
        cout << a << " \n";
    }
    else
    {
        // for (int i = 1; i <= a; i++)
        // {
        //     if (a - i >= (b - 2 * i))
        //     {
        //         cout << a - i << " \n";
        //         return;
        //     }
        // }

        int l = 1, r = a;
        int ans = INT_MAX;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            int val = (b - 2 * mid);
            if (a - mid >= val)
            {
                ans = min(ans, mid);
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (ans == INT_MAX)
        {
            cout << 0 << "\n";
            return;
        }

        cout << a - ans << "\n";
    }
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
