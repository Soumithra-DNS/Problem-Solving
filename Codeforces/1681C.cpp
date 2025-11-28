#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        int k = -1;
        int mn = a[i];
        for (int j = i + 1; j < n; j++)
        {
            if (mn > a[j])
            {
                mn = a[j];
                k = j;
            }
        }
        if (k != -1)
        {
            swap(a[i], a[k]);
            swap(b[i], b[k]);
            ans.push_back({i + 1, k + 1});
        }
    }

    for (int i = 0; i < n; i++)
    {
        int k = -1;
        int mn = b[i];
        // int j = i;
        //while ( j + 1 < n && a[j] == a[j + 1])
        for (int j = i + 1; j < n; j++)
        {
            if (mn > b[j])
            {
                mn = b[j];
                k = j;
            }
            //j++;
        }
        if (k != -1)
        {
            swap(a[i], a[k]);
            swap(b[i], b[k]);
            ans.push_back({i + 1, k + 1});
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1] || b[i] > b[i + 1])
        {
            cout << -1 << "\n";
            return;
        }
    }
    cout << ans.size() << "\n";
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << "\n";
    }
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