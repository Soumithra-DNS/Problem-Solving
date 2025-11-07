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
    sort(arr.begin(), arr.end());

    int l = 0, r = n - 1;
    int ans = 0, x = 0;

    while (l < r)
    {
        if (x + arr[l] < arr[r])
        {
            x += arr[l];
            ans += arr[l];
            l++;
        }
        else if (x + arr[l] == arr[r])
        {
            ans += arr[l];
            ans++;
            x = 0;
            l++;
            r--;
        }
        else
        {
            arr[l] += (x - arr[r]);
            ans += (arr[r] - x) + 1;
            x = 0;
            r--;
        }
    }

    if (arr[l] == 1 && l == r)
    {
        ans++;
    }
    else if (l == r)
    {
        ans -= x;
        arr[l] += x;
        ans += (arr[l] / 2 + 1);
        ans += (arr[l] % 2);
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
