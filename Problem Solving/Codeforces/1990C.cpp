#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n), pre(n + 1);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 2; i++)
    {
        int x = 0;
        vector<int> cnt(n + 1);
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            cnt[arr[i]]++;
            if (cnt[arr[i]] >= 2)
            {
                x = max(x, arr[i]);
            }
            arr[i] = x;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == 0)
            break;

        sum += (1LL * arr[i] * (n - i));
    }
    cout << sum << "\n";
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