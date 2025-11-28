#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int sum = 0, two = 0, three = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += (s[i] - '0');
        if (s[i] == '2')
            two++;
        if (s[i] == '3')
            three++;
    }

    if (sum % 9 == 0)
    {
        cout << "YES" << "\n";
        return;
    }

    bool check = false;
    for (int i = 0; i <= min(100LL, two); i++)
    {
        for (int j = 0; j <= min(100LL, three); j++)
        {
            if ((sum + i * 2LL + j * 6LL) % 9LL == 0)
            {
                cout << "YES" << "\n";
                return;
            }
        }
    }

    cout << "NO" << "\n";
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
