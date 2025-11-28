#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    if (mp.size() == 1)
    {
        cout << "NO" << "\n";
        return;
    }
    cout << "YES" << "\n";
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if ((mp[v[i]] > 1 || mp.size() == n) && check)
        {
            cout << 'R';
            check = false;
        }
        else
        {
            cout << 'B';
        }
    }

    cout << "\n";
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
