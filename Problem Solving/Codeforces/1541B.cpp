#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = v[i] - i; j <= n; j += v[i])
        {
            if (j > i && v[i] * v[j] == i + j)
            {
                cnt++;
            }
        }
    }

    cout << cnt << "\n";
}

int_fast32_t main()
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
