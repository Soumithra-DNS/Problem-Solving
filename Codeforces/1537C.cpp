#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int k = -1, def = INT_MAX, z = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            k = i + 1;
        }
        else
        {
            if (v[i + 1] - v[i] < def)
            {
                def = v[i + 1] - v[i];
                z = i + 1;
            }
        }
    }
    if (k != -1)
    {
        for (int i = k; i < n; i++)
        {
            cout << v[i] << " ";
        }
        for (int i = 0; i < k; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }
    else if (z != -1 && n > 2)
    {
        for (int i = z; i < n; i++)
        {
            cout << v[i] << " ";
        }
        for (int i = 0; i < z; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
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
