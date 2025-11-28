#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s, ans = "";
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] > s[i + 1])
        {
            ans += s[i];
        }
        else
        {
            ans += s[i];
            break;
        }
    }
    string ans1 = ans;
    reverse(ans1.begin(), ans1.end());
    cout << ans<< ans1 << "\n";
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
