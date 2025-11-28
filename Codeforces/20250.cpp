#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i < min(s.size(), t.size()); i++)
    {
        if (s[i] == t[i])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    if (cnt > 0)
        cnt--;
    int ans = s.size() + t.size();
    ans -= cnt;
    cout << ans << "\n";
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
