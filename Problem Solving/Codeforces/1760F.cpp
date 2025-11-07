#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int modExp(int x, int y)
{
    int result = 1;
    while (y > 0)
    {
        if (y % 2 == 1)
        {
            result = (result * x) % mod;
        }
        x = (x * x) % mod;
        y /= 2;
    }
    return result;
}

void solve()
{
    int n, coin, day;
    cin >> n >> coin >> day;
    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());

    int l = 0, r = day + 2;
    while (l < r)
    {
        int mid = l + (r - l + 1) / 2;
        int total = 0;
        for (int i = 0; i < day; i++)
        {
            if (i % mid < n)
            {
                total += arr[i % mid];
            }
        }
        if (total < coin)
        {
            r = mid - 1;
        }
        else
        {
            l = mid;
        }
    }

    if (l == day + 2)
    {
        cout << "Infinity\n";
        return;
    }
    if (l == 0)
    {
        cout << "Impossible\n";
        return;
    }

    cout << l - 1 << "\n";
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
