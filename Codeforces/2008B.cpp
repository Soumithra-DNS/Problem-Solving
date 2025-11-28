#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (sqrt(n) * sqrt(n) != n)
    {
        cout << "No" << "\n";
        return;
    }
    int r = sqrt(n);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            int ind = (i - 1) * r + j;
            if (i == 1 || i == r || j == 1 || j == r)
            {
                if (s[ind - 1] != '1')
                {
                    cout << "No" << "\n";
                    return;
                }
            }
            else
            {
                if (s[ind - 1] != '0')
                {
                    cout << "No" << "\n";
                    return;
                }
            }
        }
    }
    cout << "Yes" << "\n";
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
