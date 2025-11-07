#include <bits/stdc++.h>
using namespace std;
#define int long long
struct cmp
{
    bool operator()(pair<int, int> f, pair<int, int> s)
    {
        if (f.first > s.first)
        {
            return true;
        }
        else if (f.first == s.first && f.second < s.second)
        {
            return true;
        }

        return false;
    }
};

void solve()
{
    int n, m, L;
    cin >> n >> m >> L;
    vector<pair<int, int>> v, p;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        p.push_back({x, y});
    }
    int it = 0;
    int k = 1;
    int ans = 0;
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++)
    {
        int range = v[i].second - v[i].first + 2;
        int l = v[i].first;
        while (p[it].first < l && it < m)
        {
            pq.push({p[it].second, p[it].first});
            it++;
        }
        while (!pq.empty() && k < range)
        {
            k += pq.top().first;
            pq.pop();
            ans++;
        }
        if (k < range)
        {
            cout << -1 << "\n";
            return;
        }
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
