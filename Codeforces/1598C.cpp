#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    long long sum = 0, need = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (2 * sum % n != 0)
    {
        cout << 0 << "\n";
        return;
    }
    need = (2 * sum) / n;
    long long int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += mp[need - v[i]];
        mp[v[i]]++;
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
