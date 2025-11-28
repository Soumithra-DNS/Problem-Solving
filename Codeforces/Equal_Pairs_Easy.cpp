#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 0)
        {
            cnt++;
        }
        else
            arr[temp]++;
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    arr[n] += cnt;
    for (int i = n; i >= 0; i--)
    {
        if (arr[i] == 1)
        {
            break;
        }
        int val = arr[i] * (arr[i] - 1);
        val /= 2;
        ans += val;
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
