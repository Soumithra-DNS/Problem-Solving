#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s;
    cin >> n >> s;
    int sum = 0, k = -1;
    vector<int> v(n), VV;
    VV.push_back(-1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            VV.push_back(i);
        }
    }
    int mn = INT_MAX;
    int m = VV.size();
    int j = 0;
    if (m - 1 < s)
    {
        cout << -1 << "\n";
        return;
    }
    else if (m - 1 == s)
    {
        cout << 0 << "\n";
        return;
    }
    for (int i = s + 1; i < m; i++)
    {

        mn = min(mn, n - VV[i] + VV[j] + 1);
        j++;
    }
    mn = min(mn, VV[j] + 1);

    cout << mn << "\n";
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
