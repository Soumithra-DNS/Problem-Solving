#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1), first(n + 1), last(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> first[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> last[i];
        if (last[i] < first[i])
        {
            swap(first[i], last[i]);
        }
    }

    int ans = 0;
    int edge = last[2] - first[2];
    for (int i = 2; i < n; i++)
    {
        edge += 2;
        if (first[i + 1] == last[i + 1])
        {
            ans = max(ans, edge + arr[i] - 1);
            edge = 0;
        }
        else
        {
            ans = max(ans, edge + arr[i] - 1);
            int x = ((abs(first[i + 1] - 1) + abs(arr[i] - last[i + 1])));
            edge += x;
            if ((last[i + 1] - first[i + 1]) > edge)
            {
                edge = (last[i + 1] - first[i + 1]);
                continue;
            }
        }
        // cout << edge << " " << ans << "\n";
    }
    edge += 2;
    edge += arr[n] - 1;
    ans = max(ans, edge);
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
