#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n + 1), cnt(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int l = 0, m = -1, r = -1;
    int ans = 0;

    int dis = 0;
    bool ok = false;
    for (int i = 1, j = 1; i <= n;)
    {

        while (j <= n && dis < k)
        {
            j++;
            if (arr[j] - arr[j - 1] == 1)
            {
                dis++;
            }
            else if (arr[j] - arr[j - 1] > 1)
            {
                dis = 0;
                ok = true;
                // i = j;
                break;
            }
        }
        ans = max(ans, j - i);
        if (j > n)
            break;
        if (ok)
        {
            i = j;
            ok = false;
            continue;
        }
        dis--;
        while (i <= j && dis < k)
        {
            i++;
            if (arr[i] - arr[i - 1] == 1)
            {
                dis++;
            }
        }
        dis--;
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
