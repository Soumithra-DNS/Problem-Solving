#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (k == 0)
        {
            break;
        }
        ans++;
        if (arr[i] - cnt == 0)
        {
            continue;
        }
        int val = min(k, (arr[i] - cnt) * (n - i));
        k -= val;
        ans += val;
        cnt += (arr[i] - cnt);
    }

    cout << --ans << "\n";
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
