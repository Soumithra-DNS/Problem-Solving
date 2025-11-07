#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (max(a.first, a.second) == max(b.first, b.second))
    {
        return min(a.first, a.second) < min(b.first, b.second);
    }
    return max(a.first, a.second) < max(b.first, b.second);
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].first << " " << arr[i].second << " ";
    }
    cout << "\n";
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
