#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mx = 1;
    int ab = 0;
    int ba = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == 'a' && s[i] == 'b')
        {
            ab++;
        }
        else if (s[i - 1] == 'b' && s[i] == 'a')
        {
            ba++;
        }
        if (ab == ba)
        {
            mx = max(mx, i + 1);
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == 'a' && s[i] == 'b')
        {
            ab--;
        }
        else if (s[i - 1] == 'b' && s[i] == 'a')
        {
            ba--;
        }
        if (ab == ba)
        {
            mx = max(mx, n - i);
        }
    }
    cout << mx << "\n";
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
