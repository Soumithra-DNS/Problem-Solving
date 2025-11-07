#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    vector<long long> v(n);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }
    // cout <<v[0] << "\n";
    vector<long long> ans(n + 1, 0), zero;
    long long int mx = (n * (n + 1)) / 2;
    if (v[0] >= mx && n != 2)
    {
        cout << "NO" << "\n";
        return;
    }
    if (v[n - 2] > mx)
    {
        cout << "NO" << "\n";
        return;
    }

    int cnt = 0, x;
    if (v[0] > n)
    {
        cnt++;
    }
    else
        ans[v[0]]++;
    for (int i = 1; i < n - 1; i++)
    {
        int d = v[i] - v[i - 1];
        if (d > n)
        {
            cnt++;
            continue;
        }
        ans[d]++;
        if (ans[d] >= 2)
        {
            cnt++;
        }
    }
    if (cnt > 1)
    {
        cout << "NO" << "\n";
        return;
    }
    cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (ans[i] == 0)
        {
            cnt++;
        }
    }
    if ((cnt == 2 && mx == v[n - 2]) || (cnt == 1 && mx > v[n - 2]))
    {
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
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
