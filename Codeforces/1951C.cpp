#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, tr;
    cin >> n >> m >> tr;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq, ans;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int c;
        cin >> c;
        v[i] = c;
        pq.push({c, i});
    }

    while (!pq.empty() && tr > 0)
    {
        auto top = pq.top();
        pq.pop();
        int y = min(tr, m);
        tr -= y;
        ans.push({top.second, y});
    }

    int cost = 0, x = 0;
    while (!ans.empty())
    {
        auto top = ans.top();
        ans.pop();
        cost += (top.second * (v[top.first] + x));
        x += top.second;
    }

    cout << cost << "\n";
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
