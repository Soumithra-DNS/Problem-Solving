#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.begin());
    int j = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (b[j] + k < a[i] && j < m)
        {
            j++;
        }
        if (b[j] >= a[i] - k && b[j] <= a[i] + k && j < m)
        {
            ans++;
            j++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
