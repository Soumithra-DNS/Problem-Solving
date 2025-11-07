#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    priority_queue<int> pq;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
        mn = min(mn, x);
    }

    int ans = 0;
    while (true)
    {
        int toP = pq.top();
        pq.pop();
        // cout << toP << "\n";
        if (toP == mn)
        {
            break;
        }
        ans++;
        if (toP % 2 == 0)
        {
            toP /= 2;
        }
        else if (toP % 3 == 0)
        {
            toP /= 3;
        }
        else
        {
            cout << -1 << "\n";
            return;
        }
        mn = min(mn, toP);
        pq.push(toP);
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}
