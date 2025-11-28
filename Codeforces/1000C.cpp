#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;

    map<int, int> events;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        events[l]++;
        events[r + 1]--;
    }

    map<int, int> overlapLength;
    int activeRanges = 0, prevPoint = 0;

    for (auto it : events)
    {
        int currentPoint = it.first;
        if (activeRanges > 0)
        {
            overlapLength[activeRanges] += (currentPoint - prevPoint);
        }
        activeRanges += it.second;
        prevPoint = currentPoint;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << overlapLength[i] << " ";
    }
    cout << "\n";
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
