#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n), cnt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        int cal = arr[i - 1] >= arr[i] && arr[i] >= arr[i + 1];
        cnt[i] = cnt[i - 1] + cal;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (r == l)
        {
            cout << 1 << "\n";
            continue;
        }
        int range = r - l + 1;
        int ans = range - (cnt[r - 1] - cnt[l]);
        cout << ans << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}