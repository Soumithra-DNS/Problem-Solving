#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == -1 && arr[i - 1] != -1)
        {
            mn = min(mn, arr[i - 1]);
            mx = max(mx, arr[i - 1]);
        }
        if (i < n - 1 && arr[i] == -1 && arr[i + 1] != -1)
        {
            mn = min(mn, arr[i + 1]);
            mx = max(mx, arr[i + 1]);
        }
    }
    int k = (mx + mn) / 2;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
            arr[i] = k;
        if (i)
            m = max(m, abs(arr[i] - arr[i - 1]));
    }

    cout << m << " " << k << "\n";
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
