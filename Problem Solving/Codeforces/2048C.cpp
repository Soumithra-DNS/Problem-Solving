#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    int mx = 0, l = -1, r = -1;

    for (int i = 0; i < n; i++)
    {
        l = 1, r = n - i;
        if (s[i] == '0')
        {
            string sub = s.substr(i, n - i);
            string mxx = "";

            for (int j = 0; j < i; j++)
            {

                string s1 = s.substr(j, n - i), ns = "";

                for (int k = 0; k < n - i; k++)
                {
                    ns += (sub[k] == s1[k]) ? '0' : '1';
                }

                if (ns > mxx)
                {
                    mxx = ns;
                    l = j + 1;
                    r = n - i + j;
                }
            }
            break;
        }
    }

    cout << 1 << " " << n << " " << l << " " << r << "\n";
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
