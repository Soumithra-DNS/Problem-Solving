#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool check = false;
    if (s[0] == '1' || s[n - 1] == '1')
    {
        check = true;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == '1' && s[i] == '1')
        {
            check = true;
        }
    }

    if (check)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
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
