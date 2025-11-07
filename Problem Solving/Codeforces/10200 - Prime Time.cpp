#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 100010041;

bool is_prime(int x)
{
    if (x <= 1)
    {
        return false;
    }
    if (x == 2 || x == 3)
    {
        return true;
    }
    if (x % 2 == 0 || x % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= x; i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n = 10000;
    vector<bool> ans(n + 1, false);
    for (int i = 0; i <= n; i++)
    {
        ans[i] = is_prime(i * i + i + 41);
    }

    int l, r;

    while (cin >> l >> r)
    {

        int cnt = 0;
        for (int i = l; i <= r; ++i)
        {
            if (ans[i])
            {
                ++cnt;
            }
        }

        double percentage = (cnt * 100.0) / (r - l + 1) + 1e-7;
        cout << fixed << setprecision(2) << percentage << "\n";
    }

    return 0;
}
