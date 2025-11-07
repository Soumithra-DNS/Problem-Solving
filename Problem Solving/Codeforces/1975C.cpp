#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n == 2)
    {
        cout << min(v[0], v[1]) << "\n";
        return;
    }
    
    int ans = INT_MIN;
    for (int i = 0; i < n - 2; i++)
    {
        int mx = INT_MIN, mx1 = INT_MIN;
        vector<int> temp = v;
        sort(temp.begin() + i, temp.begin() + i + 3);

        ans = max(ans, temp[i + 1]);
    }

    cout << ans << "\n";
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
