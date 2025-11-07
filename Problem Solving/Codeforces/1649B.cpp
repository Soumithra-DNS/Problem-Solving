#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    long long sum = 0;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        mx = max(mx, v[i]);
    }

    if (mx == 0)
    {
        cout << 0 << "\n";
        return;
    }
    if (2 * mx <= sum)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 * mx - sum << "\n";
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
