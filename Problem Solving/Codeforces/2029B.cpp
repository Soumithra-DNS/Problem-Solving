#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;

    string s, p;
    cin >> s >> p;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            one++;
        }
    }
    int zero = n - one;
    if (one == 0 || zero == 0)
    {
        cout << "NO" << "\n";
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (p[i] == '1')
        {
            zero--;
        }
        else
        {
            one--;
        }

        if (i != n - 2 && (one <= 0 || zero <= 0))
        {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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
