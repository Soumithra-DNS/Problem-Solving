#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % v[0] == 0)
        {
            vis[i] = 1;
        }
        else
        {
            mn = min(mn, i);
        }
    }
    if (mn != INT_MAX)
    {
        for (int i = mn; i < n; i++)
        {
            if(v[i] % v[mn] == 0){
                vis[i] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            cout << "No" << "\n";
            return;
        }
    }

    cout << "Yes" << "\n";
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
