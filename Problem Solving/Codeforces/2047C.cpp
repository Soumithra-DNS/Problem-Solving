#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(2, vector<int>(n));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    auto comparator = [](const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
    {
        if (a.first == b.first)
        {
            return max(a.second.first, a.second.second) > max(b.second.first, b.second.second);
        }
        return a.first < b.first;
    };

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, decltype(comparator)> pq(comparator);

    for (int i = 0; i < n; i++)
    {
        pq.push(make_pair(v[0][i] + v[1][i], make_pair(v[0][i], v[1][i])));
    }

    int sum = INT_MIN;
    bool first = true;
    if (n >= 2)
    {
        auto top1 = pq.top();
        pq.pop();
        auto top2 = pq.top();
        pq.pop();
        int mx1 = max(top1.second.first, top1.second.second);
        int mx2 = max(top2.second.first, top2.second.second);
        sum = max(sum, mx1 + top2.first);
        sum = max(sum, mx2 + top1.first);
        first = false;
    }
    if(sum == INT_MIN){
        sum = 0;
    }
    //cout << sum << "\n";
    while (!pq.empty())
    {
        auto top = pq.top();
        pq.pop();
        //cout << top.first << " {" << top.second.first << ", " << top.second.second << "}\n";
        if (first)
        {
            sum += top.first;
            first = false;
        }
        else
        {
            sum += max(top.second.first, top.second.second);
        }
    }
    cout << sum << "\n";
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
