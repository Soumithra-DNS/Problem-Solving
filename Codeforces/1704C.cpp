#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    priority_queue<int> pq;
    for (int i = 0; i < m - 1; i++)
    {
        pq.push(v[i + 1] - v[i] - 1);
    }
    pq.push(n - v[m - 1] + v[0] - 1);
    // cout << pq.top() << "\n";
    int ans = 0, ope = 0;

    while (!pq.empty())
    {
        int t = pq.top();
        pq.pop();
        t = t - (ope * 2);
        if (t <= 0)
        {
            break;
        }
        ans += t - 1;
        if (t == 1)
        {
            ans++;
        }
        ope += 2;
    }

    cout << n - ans << "\n";
}

int main()
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
