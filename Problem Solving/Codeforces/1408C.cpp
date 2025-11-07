#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, l;
    cin >> n >> l;
    vector<int> arr(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double ans = 0;
    double i = 0, j = n - 1, a = 0, b = l, sa = 1, sb = 1;
    while (i <= j)
    {
        double d1 = arr[i] - a;
        double d2 = b - arr[j];
        double t1 = d1 / sa;
        double t2 = d2 / sb;
        if (t1 <= t2)
        {
            ans += t1;
            a += d1;
            b -= (sb * t1);
            sa++;
            i++;
        }
        else
        {
            ans += t2;
            a += (sa * t2);
            b -= d2;
            sb++;
            j--;
        }
    }
    double d = b - a;
    ans += (d / (sa + sb));
    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cout << fixed;
    cout.precision(15);
    while (t--)
    {
        solve();
    }
    return 0;
}
