#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int a, b;
    while (n--)
    {
        cin >> a >> b;
        mp[a]++;
        mp[b + 1]--;
    }
    int mx = 0, ans = 0;
    for (auto it : mp)
    {
        ans += it.second;
        mx = max(mx, ans);
    }

    cout << mx << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
