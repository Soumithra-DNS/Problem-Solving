#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1), cnt(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        cnt[arr[i]] = i;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == i)
            continue;
        if (i == arr[arr[i]])
            continue;
        ans++;
        int x = cnt[i]; // 5
        int y = arr[i]; // 2
        swap(arr[y], arr[x]);
        cnt[arr[y]] = y;
        cnt[arr[x]] = x;
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
