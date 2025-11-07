#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    priority_queue<int> pq;
    for (auto it : mp)
    {
        int u = it.first;
        int v = it.second;
        pq.push(v);
    }
    int collect = 0;

    while (true)
    {
        if (pq.empty())
        {
            break;
        }
        int Top = pq.top();
        pq.pop();
        if (Top == k)
        {
            collect += (k - 1);
        }
        else if (Top > k)
        {
            Top -= k;
            pq.push(Top);
            collect += k - 1;
        }
        else
        {
            collect += Top;
            if (collect >= k)
                collect--;
            else
            {
                break;
            }
        }
    }
    int sum = 0;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
    }
    if(collect >= k){
        collect = k - 1;
    }
    cout << collect + sum << "\n";
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
