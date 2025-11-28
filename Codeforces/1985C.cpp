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
    map<long long, long long> mp;
    int cnt = 0;
    // mp[0] = 1;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]] = 1;
        sum += v[i];

        if (sum % 2 == 0 && mp[sum / 2] == 1)
        {
            cnt++;
            // cout << sum << "/";
        }
    }
    cout << cnt << "\n";
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
