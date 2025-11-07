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
    priority_queue<int, vector<int>, greater<int>> pq;
    int h = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            pq.push(arr[i]);
        }
        h = h + arr[i];
        ans++;

        if (h < 0)
        {
            while (!pq.empty() && (h < 0))
            {
                ans--;
                int val = pq.top();
                pq.pop();
                h -= val;
            }
        }
    }
    cout << ans << "\n";
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
