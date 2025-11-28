#include <bits/stdc++.h>
using namespace std;

void solve()
{
    
    int n, k;
    cin >> n >> k;
    vector<vector<int>> v(k + 1);
    int in;
    for (int i = 1; i <= n; i++)
    {
        cin >> in;
        v[in].push_back(i);
    }
    int mx = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        if (v[i].empty())
            continue;
        priority_queue<int> pq;
        pq.push(v[i][0] - 1);
        for (int j = 1; j < v[i].size(); j++)
        {
            pq.push(v[i][j] - v[i][j - 1] - 1);
        }
        pq.push(n - v[i][v[i].size() - 1]);
        // while(!pq.empty()){
        //     cout << pq.top() << " ";
        //     pq.pop();
        // }
        // cout << "\n";

        int Top = pq.top();
        pq.pop();
        pq.push(Top / 2);
        mx = min(mx, pq.top());
    }

    cout << mx << "\n";
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
