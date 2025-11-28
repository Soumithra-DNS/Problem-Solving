#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int type, val;
        cin >> type >> val;

        if (type == 1)
        {
            val = 1LL << val;
            mp[val]++;
        }
        else
        {
            for (auto it = mp.crbegin(); it != mp.crend(); it++)
            {
                if (it->first <= val)
                {
                    int x = val / it->first;
                    x = min(x, it->second);
                    val -= x * it->first;
                }
            }
            if (val == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
