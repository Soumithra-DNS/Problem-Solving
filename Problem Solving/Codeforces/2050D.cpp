#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(s[i] - '0');
    }

    for (int i = 0; i < n; i++)
    {
        int mx = v[i];
        int ind = i;
        for (int j = i; j < min(n, i + 13); j++)
        {
            int tr = (v[j] - (j - i));
            if (tr >= 0 && tr > mx)
            {
                ind = j;
                mx = tr;
            }
        }
        while (ind > i)
        {
            v[ind]--;
            swap(v[ind], v[ind - 1]);
            ind--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
    cout << "\n";
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
