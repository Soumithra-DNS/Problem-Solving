#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c, d;
    cin >> n >> c >> d;
    map<int, int> mp;
    int a = INT_MAX;
    for (int i = 0; i < n * n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        a = min(a, x);
    }
    int x = a;
    for (int i = 0; i < n * n; i++)
    {
        if (i % n == 0 && i != 0)
        {
            a += c;
            x = a;
        }
        if (mp[x] == 0)
        {
            cout << "NO" << "\n";
            return;
        }
        else
        {
            mp[x]--;
        }
        x += d;
    }
    cout << "YES" << "\n";
    return;
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
