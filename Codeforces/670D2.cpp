#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1e18

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int left = 0, right = 2e9 + 5;
    int mid;
    while (true)
    {
        mid = (left + right) / 2;
        int magic = 0;
        for (int i = 0; i < n; i++)
        {
            magic += max(0LL, (a[i] * mid) - b[i]);
            if (magic > k)
            {
                break;
            }
        }
        int mid1 = mid + 1;
        int magic1 = 0;
        for (int i = 0; i < n; i++)
        {
            magic1 += max(0LL, (a[i] * mid1) - b[i]);
            if (magic1 > k)
            {
                break;
            }
        }
        if (magic == k)
        {
            break;
        }
        if (magic - k < 0 && magic1 - k > 0)
        {
            break;
        }
        if (magic < k)
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }

    cout << mid << "\n";
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
