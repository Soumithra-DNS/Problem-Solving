#include <bits/stdc++.h>
using namespace std;
#define int long long

int cal(int l, int mid, int r)
{
    int sum = 0;
    sum += mid * (mid + 1);
    sum -= l * (l - 1) / 2;
    sum -= r * (r + 1) / 2;
    return abs(sum);
}

int ternary(int l, int r)
{
    int ll = l, rr = r;

    while (ll <= rr)
    {
        int mid1 = ll + (rr - ll) / 3;
        int mid2 = rr - (rr - ll) / 3;

        int a = cal(l, mid1, r);
        int b = cal(l, mid2, r);
        // cout << mid1 << " " << a << " " << mid2 << " " << b << "\n";
        if (mid1 == mid2)
        {
            return mid1;
        }
        if (a == 0)
        {
            return mid1;
        }
        if (b == 0)
        {
            return mid2;
        }
        if (a < b)
        {
            rr = mid2 - 1;
        }
        else if (a > b)
        {
            ll = mid1 + 1;
        }
        else
        {
            ll = mid1 + 1;
            rr = mid2 - 1;
        }
    }
    return rr;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int l = k, r = k + n - 1;
    int ll = l, rr = r;
    int ans = ternary(l, r);
    cout << cal(l, ans, r) << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // cout << cal(3, 7, 7);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
